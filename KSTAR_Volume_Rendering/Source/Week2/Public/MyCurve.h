// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Curves/CurveLinearColor.h"
#include "MyCurve.generated.h"

UCLASS()
class WEEK2_API AMyCurve : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyCurve();
	// 컬러 커브 변수
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Curves")
	UCurveLinearColor* ColorCurve;

	// 알파 값을 설정하는 함수
	void SetAlphaValue(float NewAlpha);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
