// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

class KSTAR_API PositionLoader
{
public:
	PositionLoader();
	~PositionLoader();

	UFUNCTION(BluprintCallable, Categort = "Position Loading From TXT")
	static TArray<FVector> LoadPositions(const FString& FilePath);
};
