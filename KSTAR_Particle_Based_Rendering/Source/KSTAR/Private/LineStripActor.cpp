// Fill out your copyright notice in the Description page of Project Settings.


#include "LineStripActor.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InstancedStaticMeshComponent.h"

// Sets default values
ALineStripActor::ALineStripActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	LineBatcher = CreateDefaultSubobject<ULineBatchComponent>(TEXT("LineBatcher"));
	LineBatcher->SetupAttachment(RootComponent);

    FilePath = "C:/Users/hamor/OneDrive/Desktop/trajInfo_rand100/28.txt";

}

// Called when the game starts or when spawned
void ALineStripActor::BeginPlay()
{
	Super::BeginPlay();
    LoadPositons();
    DrawLineStrip(Positions, FColor::Red, 2.0f, 0.0f);
}

// Called every frame
void ALineStripActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALineStripActor::LoadPositons()
{
    TArray<FString> FileLines;

    // Load the file into a string array
    if (FFileHelper::LoadFileToStringArray(FileLines, *FilePath))
    {
        for (int i = 2; i < FileLines.Num(); i++)
        {
            // Split the line into x, y, z components
            TArray<FString> ParsedValues;
            FileLines[i].ParseIntoArray(ParsedValues, TEXT(" "), true);

            if (ParsedValues.Num() == 3)
            {
                // Convert string values to floats
                double X = FCString::Atod(*ParsedValues[0]) * 1000;
                double Y = FCString::Atod(*ParsedValues[1]) * 1000;
                double Z = FCString::Atod(*ParsedValues[2]) * 1000;

                Positions.Add(FVector3d(X, Y, Z));
            }
        }
        UE_LOG(LogTemp, Warning, TEXT("Positions.Num: %d"), Positions.Num());
    }
}

void ALineStripActor::DrawLineStrip(const TArray<FVector>& Points, const FColor& Color, float Thickness, float LifeTime)
{
    if (Points.Num() < 2 || !LineBatcher)
        return;

    for (int32 i = 0; i < Points.Num() - 1; ++i)
    {
        LineBatcher->DrawLine(Points[i], Points[i + 1], Color, SDPG_World, Thickness, LifeTime);
    }
}

