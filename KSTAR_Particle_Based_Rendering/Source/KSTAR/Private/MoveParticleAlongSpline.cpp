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
    //    // 스플라인 전체 길이 계산
    //    float TotalSplineLength = SplineComponent->GetSplineLength();

    //    // DeltaTime을 이용한 이동 속도 조정
    //    float Speed = 500.0f;  // 파티클의 이동 속도 (값을 높이면 파티클이 더 빠르게 이동)

    //    // 이동할 거리를 계산
    //    DistanceTravelled += Speed * DeltaTime;

    //    // 스플라인 끝에 도달했는지 확인 (DistanceTravelled가 TotalSplineLength보다 크면 멈춤)
    //    if (DistanceTravelled >= TotalSplineLength)
    //    {
    //        // 스플라인의 마지막 포인트에 도착한 경우: 멈추기
    //        DistanceTravelled = TotalSplineLength;
    //    }

    //    // 스플라인에서 현재 거리의 위치 계산
    //    FVector NewLocation = SplineComponent->GetLocationAtDistanceAlongSpline(DistanceTravelled, ESplineCoordinateSpace::World);

    //    // 나이아가라 파티클의 위치 업데이트
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
            // 공백 기준으로 라인 분리
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
    // 배열이 비어있을 경우 종료
    if (Positions.Num() == 0) {
        UE_LOG(LogTemp, Warning, TEXT("positions 배열이 비어 있습니다!"));
        return; 
    }

    // 스플라인 초기화
    SplineComponent->ClearSplinePoints();

    // 샘플링한 좌표를 저장할 배열
    FilteredPositions.Add(Positions[0]);
    FVector LastPoint = Positions[0];

    // 서로 일정 거리 이상 떨어진 좌표만 배열에 저장
    for (int32 i = 1; i < Positions.Num(); i++) {
        if (FVector::Dist(LastPoint, Positions[i]) > 30) { // 정수값 조절을 통해서 제어 가능
            FilteredPositions.Add(Positions[i]);
            LastPoint = Positions[i];
        }
    }
    UE_LOG(LogTemp, Warning, TEXT("Positions.Num: %d"), Positions.Num());
    UE_LOG(LogTemp, Warning, TEXT("FilteredPositions.Num: %d"), FilteredPositions.Num());

    // 샘플링한 배열의 좌표대로 스플라인 생성
    for (int32 i = 0; i < FilteredPositions.Num(); ++i)
    {
        SplineComponent->AddSplinePoint(FilteredPositions[i], ESplineCoordinateSpace::Local, true);

        SplineComponent->SetSplinePointType(i, ESplinePointType::Linear, true);
    }

    SplineComponent->UpdateSpline();
}