#include "MyActor2.h"
#include "Math/UnrealMathUtility.h"

AMyActor2::AMyActor2()
{
	PrimaryActorTick.bCanEverTick = true;

	// �ʱ� ��ġ
	CurrentLocation = FVector(0.0f, 0.0f, 0.0f);

	StartLocation = FVector(0.0f, 0.0f, 0.0f);

	// �̵� Ƚ�� �ʱ�ȭ
	MoveCount = 0;
}

void AMyActor2::BeginPlay()
{
	Super::BeginPlay();

	// �̵� ����
	StartMoving();
}

void AMyActor2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Step �Լ�(0-1 ���� ��ȯ)
int AMyActor2::Step()
{
	return FMath::RandRange(0, 1);
}

void AMyActor2::MoveOnce()
{
	/*if (MoveCount >= 10)
	{
		GetWorld()->GetTimerManager().ClearTimer(MoveTimerHandle); // ����
		UE_LOG(LogTemp, Log, TEXT("End"));
		return;
	}*/

	if (MoveCount != 0 && MoveCount % 10 == 0)
	{
		CreateEvent();
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
void AMyActor2::StartMoving()
{
	// 1�� �������� MoveOnce �Լ� ȣ��
	GetWorld()->GetTimerManager().SetTimer(MoveTimerHandle, this, &AMyActor2::MoveOnce, 1.0f, true);
}

// 10ȸ �̺�Ʈ
void AMyActor2::CreateEvent()
{
	UE_LOG(LogTemp, Error, TEXT("curr : (%.0f, %.0f), start : (%.0f, %.0f)"), CurrentLocation.X / 100, CurrentLocation.Y / 100, StartLocation.X / 100, StartLocation.Y / 100);
	UE_LOG(LogTemp, Error, TEXT("dis : (%.0f, %.0f)"), (CurrentLocation.X - StartLocation.X) / 100, (CurrentLocation.Y - StartLocation.Y) / 100);
	StartLocation.X += CurrentLocation.X;
	StartLocation.Y += CurrentLocation.Y;
}