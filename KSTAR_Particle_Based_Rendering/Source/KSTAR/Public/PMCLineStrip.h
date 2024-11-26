// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "PMCLineStrip.generated.h"

UCLASS()
class KSTAR_API APMCLineStrip : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APMCLineStrip();

	void CreateMesh(const TArray<FVector>& Points);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	UProceduralMeshComponent* ProceduralMesh;

	TArray<FVector> Positions;

	UPROPERTY(EditAnywhere)
	FString FilePath;

	UPROPERTY(EditAnywhere)
	UMaterialInterface* LineMaterial;
};
