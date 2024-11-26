// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SplineComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "NiagaraSystem.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "MoveParticleAlongSpline.generated.h"

UCLASS()
class KSTAR_API AMoveParticleAlongSpline : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMoveParticleAlongSpline();

	void LoadPositons();

	void DrawSpline();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USplineComponent* SplineComponent;

	UPROPERTY(VIsibleAnywhere)
	UNiagaraComponent* NiagaraComponent;

	UPROPERTY(VIsibleAnywhere)
	UNiagaraSystem* NiagaraSystem;

	TArray<FVector> Positions;

	TArray<FVector> FilteredPositions;

	float DistanceTravelled = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString FilePath;
};
