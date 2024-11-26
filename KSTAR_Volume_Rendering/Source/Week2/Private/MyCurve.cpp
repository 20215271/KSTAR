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
        // ���� ä���� Ű�� ������
        FRichCurve& AlphaCurve = ColorCurve->FloatCurves[3];

        // ��� Ű�� ���� ���� ���� 0.5�� ����
        for (int32 KeyIndex = 0; KeyIndex < AlphaCurve.Keys.Num(); KeyIndex++)
        {
            // �� Ű�� �ð�
            float KeyTime = AlphaCurve.Keys[KeyIndex].Time;

            // ���� ���� NewAlpha�� ����
            AlphaCurve.UpdateOrAddKey(KeyTime, NewAlpha);
        }
    }
}