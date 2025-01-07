#include "MyActor1.h"
#include "Math/UnrealMathUtility.h"

AMyActor1::AMyActor1()
{
	PrimaryActorTick.bCanEverTick = true;

	// 초기 위치
	CurrentLocation = FVector(0.0f, 0.0f, 0.0f);

	// 이동 횟수 초기화
	MoveCount = 0;
}

void AMyActor1::BeginPlay()
{
	Super::BeginPlay();

	// 이동 시작
	StartMoving();
}

void AMyActor1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Step 함수(0-1 랜덤 반환)
int AMyActor1::Step()
{
	return FMath::RandRange(0, 1);
}

void AMyActor1::MoveOnce()
{
	if (MoveCount >= 10)
	{
		GetWorld()->GetTimerManager().ClearTimer(MoveTimerHandle); // 정지
		UE_LOG(LogTemp, Log, TEXT("End"));
		return;
	}

	// x, y 좌표 각각 Step 함수로 이동 거리 결정
	int XStep = Step();
	int YStep = Step();

	// 현재 위치에 Step 값을 추가하여 새 위치 계산
	CurrentLocation.X += XStep * 100.0f;
	CurrentLocation.Y += YStep * 100.0f;

	// 위치 업데이트
	SetActorLocation(CurrentLocation);

	// 현재 좌표 출력
	UE_LOG(LogTemp, Log, TEXT("%dr: (%.0f, %.0f, %.0f)"), MoveCount + 1, CurrentLocation.X / 100, CurrentLocation.Y / 100, CurrentLocation.Z);

	MoveCount++;
}

// 이동 시작
void AMyActor1::StartMoving()
{
	// 1초 간격으로 MoveOnce 함수 호출
	GetWorld()->GetTimerManager().SetTimer(MoveTimerHandle, this, &AMyActor1::MoveOnce, 1.0f, true);
}
