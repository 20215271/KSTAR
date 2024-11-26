// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "LineStripActor.generated.h"

UCLASS()
class KSTAR_API ALineStripActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALineStripActor();
	void DrawLineStrip(const TArray<FVector>& Points, const FColor& Color, float Thickness, float LifeTime);
	void LoadPositons();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY()
	ULineBatchComponent* LineBatcher;

	TArray<FVector> Positions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString FilePath;

};
