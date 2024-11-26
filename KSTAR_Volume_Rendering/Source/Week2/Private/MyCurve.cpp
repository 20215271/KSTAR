// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCurve.h"

// Sets default values
AMyCurve::AMyCurve()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCurve::BeginPlay()
{
	Super::BeginPlay();
	
}


void AMyCurve::SetAlphaValue(float NewAlpha)
{
    if (ColorCurve)
    {
        // 알파 채널의 키를 가져옴
        FRichCurve& AlphaCurve = ColorCurve->FloatCurves[3];

        // 모든 키에 대해 알파 값을 0.5로 설정
        for (int32 KeyIndex = 0; KeyIndex < AlphaCurve.Keys.Num(); KeyIndex++)
        {
            // 각 키의 시간
            float KeyTime = AlphaCurve.Keys[KeyIndex].Time;

            // 알파 값을 NewAlpha로 설정
            AlphaCurve.UpdateOrAddKey(KeyTime, NewAlpha);
        }
    }
}