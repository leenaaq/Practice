#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor2.generated.h"

UCLASS()
class G250106_API AMyActor2 : public AActor
{
	GENERATED_BODY()

public:

	AMyActor2();

protected:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;

private:

	int Step();
	void MoveOnce();
	void StartMoving();
	void CreateEvent();

	FVector CurrentLocation;
	FVector StartLocation;

	FTimerHandle MoveTimerHandle;

	int MoveCount;
};
