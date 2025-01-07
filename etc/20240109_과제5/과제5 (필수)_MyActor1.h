#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor1.generated.h"

UCLASS()
class G250106_API AMyActor1 : public AActor
{
	GENERATED_BODY()

public:

	AMyActor1();

protected:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;

private:

	int Step();
	void MoveOnce();
	void StartMoving();

	FVector CurrentLocation;

	FTimerHandle MoveTimerHandle;

	int MoveCount;
};
