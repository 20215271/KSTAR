// Fill out your copyright notice in the Description page of Project Settings.

#include "PMCLineStrip.h"
#include "ProceduralMeshComponent.h"
#include "PositionLoader.h"

// Sets default values
APMCLineStrip::APMCLineStrip()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    ProceduralMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("ProceduralMesh"));
	RootComponent = ProceduralMesh;

    // 파일 경로, 에디터 창에서 편집 가능
    FilePath = "";
}

// Called when the game starts or when spawned
void APMCLineStrip::BeginPlay()
{
	Super::BeginPlay();
    // TXT파일 좌표 읽기
    Positions = PositionLoader::LoadPositions(FilePath);
    // 메시 생성
    CreateMesh(Positions);
    // 액터 틱 비활성화
    SetActorTickEnabled(false);
}

// Called every frame
void APMCLineStrip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APMCLineStrip::CreateMesh(const TArray<FVector>& Points)
{
    TArray<FVector> Vertices; // 정점 배열
    TArray<int32> Triangles; // 삼각형 구성 정점 인덱스 배열
    TArray<FVector> Normals; // 법선 벡터 배열
    TArray<FVector2D> UV0; // UV 배열
    TArray<FLinearColor> VertexColors; // 정점 색상 배열

    float Width = 5.0f; // 메쉬 너비

    for (int32 i = 0; i < Points.Num() - 1; i++)
    {
        FVector StartPoint = Points[i]; // 시작지점
        FVector EndPoint = Points[i + 1]; // 끝지점
        // 시작 지점과 끝지점의 방향 벡터 정규화
        FVector Direction = (EndPoint - StartPoint).GetSafeNormal();
        // 두 점 사이의 선을 기준으로 수직 방향 정의
        FVector RightVector = FVector::CrossProduct(Direction, FVector(0, 0, 1)).GetSafeNormal();

        // 각 정점을 기준으로 양쪽으로 폭의 절반만큼 이동, 두께를 가진 사각형 메쉬 생성
        Vertices.Add(StartPoint + RightVector * (Width / 2));
        Vertices.Add(StartPoint - RightVector * (Width / 2));
        Vertices.Add(EndPoint + RightVector * (Width / 2));
        Vertices.Add(EndPoint - RightVector * (Width / 2));

        // 정점 인덱스
        int32 VertIndex = i * 4;

        // 첫 번째 면 (기존 면)
        Triangles.Add(VertIndex);
        Triangles.Add(VertIndex + 2);
        Triangles.Add(VertIndex + 1);
        Triangles.Add(VertIndex + 1);
        Triangles.Add(VertIndex + 2);
        Triangles.Add(VertIndex + 3);

    }

    // 메시 생성
    ProceduralMesh->SetCastShadow(false);
    ProceduralMesh->CreateMeshSection_LinearColor(0, Vertices, Triangles, Normals, UV0, VertexColors, TArray<FProcMeshTangent>(), false);

    // 머티리얼 설정, 설정하지 않을시 기본 머티리얼 자동 적용
    if (LineMaterial)
    {
        ProceduralMesh->SetMaterial(0, LineMaterial);
    }
}





// 두 번째 면 (반대 방향)
        /*Triangles.Add(VertIndex);
        Triangles.Add(VertIndex + 1);
        Triangles.Add(VertIndex + 2);
        Triangles.Add(VertIndex + 1);
        Triangles.Add(VertIndex + 3);
        Triangles.Add(VertIndex + 2);*/

        // 양면에 대한 법선 추가
        //FVector Normal = FVector::CrossProduct(RightVector, Direction);
        //Normals.Add(Normal);
        //Normals.Add(Normal);
        //Normals.Add(Normal);
        //Normals.Add(Normal);

        //// UV 추가
        //float UStart = static_cast<float>(i) / (Points.Num() - 1);
        //float UEnd = static_cast<float>(i + 1) / (Points.Num() - 1);
        //UV0.Add(FVector2D(UStart, 0));
        //UV0.Add(FVector2D(UStart, 1));
        //UV0.Add(FVector2D(UEnd, 0));
        //UV0.Add(FVector2D(UEnd, 1));

        // 정점의 색
        /*VertexColors.Add(FLinearColor::Red);
        VertexColors.Add(FLinearColor::Red);
        VertexColors.Add(FLinearColor::Red);
        VertexColors.Add(FLinearColor::Red);*/