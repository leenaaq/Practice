#include "MyActor1.h"
#include "Math/UnrealMathUtility.h"

AMyActor1::AMyActor1()
{
	PrimaryActorTick.bCanEverTick = true;

	// �ʱ� ��ġ
	CurrentLocation = FVector(0.0f, 0.0f, 0.0f);

	// �̵� Ƚ�� �ʱ�ȭ
	MoveCount = 0;
}

void AMyActor1::BeginPlay()
{
	Super::BeginPlay();

	// �̵� ����
	StartMoving();
}

void AMyActor1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Step �Լ�(0-1 ���� ��ȯ)
int AMyActor1::Step()
{
	return FMath::RandRange(0, 1);
}

void AMyActor1::MoveOnce()
{
	if (MoveCount >= 10)
	{
		GetWorld()->GetTimerManager().ClearTimer(MoveTimerHandle); // ����
		UE_LOG(LogTemp, Log, TEXT("End"));
		return;
	}

	// x, y ��ǥ ���� Step �Լ��� �̵� �Ÿ� ����
	int XStep = Step();
	int YStep = Step();

	// ���� ��ġ�� Step ���� �߰��Ͽ� �� ��ġ ���
	CurrentLocation.X += XStep * 100.0f;
	CurrentLocation.Y += YStep * 100.0f;

	// ��ġ ������Ʈ
	SetActorLocation(CurrentLocation);

	// ���� ��ǥ ���
	UE_LOG(LogTemp, Log, TEXT("%dr: (%.0f, %.0f, %.0f)"), MoveCount + 1, CurrentLocation.X / 100, CurrentLocation.Y / 100, CurrentLocation.Z);

	MoveCount++;
}

// �̵� ����
void AMyActor1::StartMoving()
{
	// 1�� �������� MoveOnce �Լ� ȣ��
	GetWorld()->GetTimerManager().SetTimer(MoveTimerHandle, this, &AMyActor1::MoveOnce, 1.0f, true);
}
