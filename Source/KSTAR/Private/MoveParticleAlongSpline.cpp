// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveParticleAlongSpline.h"
#include "Components/SplineComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "NiagaraSystem.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

// Sets default values
AMoveParticleAlongSpline::AMoveParticleAlongSpline()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    RootComponent = SplineComponent;

    NiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    NiagaraComponent->SetupAttachment(RootComponent);

    FilePath = "";

}

// Called when the game starts or when spawned
void AMoveParticleAlongSpline::BeginPlay()
{
	Super::BeginPlay();
    DistanceTravelled = 0.f;
    LoadPositons();
    DrawSpline();

    /*if (NiagaraSystem) {
        NiagaraComponent->SetAsset(NiagaraSystem);
        NiagaraComponent->Activate();
    }*/
}

// Called every frame
void AMoveParticleAlongSpline::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    //if (NiagaraComponent && SplineComponent)
    //{
    //    // ���ö��� ��ü ���� ���
    //    float TotalSplineLength = SplineComponent->GetSplineLength();

    //    // DeltaTime�� �̿��� �̵� �ӵ� ����
    //    float Speed = 500.0f;  // ��ƼŬ�� �̵� �ӵ� (���� ���̸� ��ƼŬ�� �� ������ �̵�)

    //    // �̵��� �Ÿ��� ���
    //    DistanceTravelled += Speed * DeltaTime;

    //    // ���ö��� ���� �����ߴ��� Ȯ�� (DistanceTravelled�� TotalSplineLength���� ũ�� ����)
    //    if (DistanceTravelled >= TotalSplineLength)
    //    {
    //        // ���ö����� ������ ����Ʈ�� ������ ���: ���߱�
    //        DistanceTravelled = TotalSplineLength;
    //    }

    //    // ���ö��ο��� ���� �Ÿ��� ��ġ ���
    //    FVector NewLocation = SplineComponent->GetLocationAtDistanceAlongSpline(DistanceTravelled, ESplineCoordinateSpace::World);

    //    // ���̾ư��� ��ƼŬ�� ��ġ ������Ʈ
    //    NiagaraComponent->SetWorldLocation(NewLocation);
    //}
}

void AMoveParticleAlongSpline::LoadPositons()
{
    TArray<FString> FileLines;

    //FString path = "C:/Users/GVEUser/Documents/Unreal Projects/Nuclear_Fusion/Content/Data/31.txt";

    // Load the file into a string array
    if (FFileHelper::LoadFileToStringArray(FileLines, *FilePath))
    {
        for (int i = 2; i < FileLines.Num(); i++)
        {
            // ���� �������� ���� �и�
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
    }
}

void AMoveParticleAlongSpline::DrawSpline()
{
    // �迭�� ������� ��� ����
    if (Positions.Num() == 0) {
        UE_LOG(LogTemp, Warning, TEXT("positions �迭�� ��� �ֽ��ϴ�!"));
        return; 
    }

    // ���ö��� �ʱ�ȭ
    SplineComponent->ClearSplinePoints();

    // ���ø��� ��ǥ�� ������ �迭
    FilteredPositions.Add(Positions[0]);
    FVector LastPoint = Positions[0];

    // ���� ���� �Ÿ� �̻� ������ ��ǥ�� �迭�� ����
    for (int32 i = 1; i < Positions.Num(); i++) {
        if (FVector::Dist(LastPoint, Positions[i]) > 30) { // ������ ������ ���ؼ� ���� ����
            FilteredPositions.Add(Positions[i]);
            LastPoint = Positions[i];
        }
    }
    UE_LOG(LogTemp, Warning, TEXT("Positions.Num: %d"), Positions.Num());
    UE_LOG(LogTemp, Warning, TEXT("FilteredPositions.Num: %d"), FilteredPositions.Num());

    // ���ø��� �迭�� ��ǥ��� ���ö��� ����
    for (int32 i = 0; i < FilteredPositions.Num(); ++i)
    {
        SplineComponent->AddSplinePoint(FilteredPositions[i], ESplineCoordinateSpace::Local, true);

        SplineComponent->SetSplinePointType(i, ESplinePointType::Linear, true);
    }

    SplineComponent->UpdateSpline();
}