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

    // ���� ���, ������ â���� ���� ����
    FilePath = "";
}

// Called when the game starts or when spawned
void APMCLineStrip::BeginPlay()
{
	Super::BeginPlay();
    // TXT���� ��ǥ �б�
    Positions = PositionLoader::LoadPositions(FilePath);
    // �޽� ����
    CreateMesh(Positions);
    // ���� ƽ ��Ȱ��ȭ
    SetActorTickEnabled(false);
}

// Called every frame
void APMCLineStrip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APMCLineStrip::CreateMesh(const TArray<FVector>& Points)
{
    TArray<FVector> Vertices; // ���� �迭
    TArray<int32> Triangles; // �ﰢ�� ���� ���� �ε��� �迭
    TArray<FVector> Normals; // ���� ���� �迭
    TArray<FVector2D> UV0; // UV �迭
    TArray<FLinearColor> VertexColors; // ���� ���� �迭

    float Width = 5.0f; // �޽� �ʺ�

    for (int32 i = 0; i < Points.Num() - 1; i++)
    {
        FVector StartPoint = Points[i]; // ��������
        FVector EndPoint = Points[i + 1]; // ������
        // ���� ������ �������� ���� ���� ����ȭ
        FVector Direction = (EndPoint - StartPoint).GetSafeNormal();
        // �� �� ������ ���� �������� ���� ���� ����
        FVector RightVector = FVector::CrossProduct(Direction, FVector(0, 0, 1)).GetSafeNormal();

        // �� ������ �������� �������� ���� ���ݸ�ŭ �̵�, �β��� ���� �簢�� �޽� ����
        Vertices.Add(StartPoint + RightVector * (Width / 2));
        Vertices.Add(StartPoint - RightVector * (Width / 2));
        Vertices.Add(EndPoint + RightVector * (Width / 2));
        Vertices.Add(EndPoint - RightVector * (Width / 2));

        // ���� �ε���
        int32 VertIndex = i * 4;

        // ù ��° �� (���� ��)
        Triangles.Add(VertIndex);
        Triangles.Add(VertIndex + 2);
        Triangles.Add(VertIndex + 1);
        Triangles.Add(VertIndex + 1);
        Triangles.Add(VertIndex + 2);
        Triangles.Add(VertIndex + 3);

    }

    // �޽� ����
    ProceduralMesh->SetCastShadow(false);
    ProceduralMesh->CreateMeshSection_LinearColor(0, Vertices, Triangles, Normals, UV0, VertexColors, TArray<FProcMeshTangent>(), false);

    // ��Ƽ���� ����, �������� ������ �⺻ ��Ƽ���� �ڵ� ����
    if (LineMaterial)
    {
        ProceduralMesh->SetMaterial(0, LineMaterial);
    }
}





// �� ��° �� (�ݴ� ����)
        /*Triangles.Add(VertIndex);
        Triangles.Add(VertIndex + 1);
        Triangles.Add(VertIndex + 2);
        Triangles.Add(VertIndex + 1);
        Triangles.Add(VertIndex + 3);
        Triangles.Add(VertIndex + 2);*/

        // ��鿡 ���� ���� �߰�
        //FVector Normal = FVector::CrossProduct(RightVector, Direction);
        //Normals.Add(Normal);
        //Normals.Add(Normal);
        //Normals.Add(Normal);
        //Normals.Add(Normal);

        //// UV �߰�
        //float UStart = static_cast<float>(i) / (Points.Num() - 1);
        //float UEnd = static_cast<float>(i + 1) / (Points.Num() - 1);
        //UV0.Add(FVector2D(UStart, 0));
        //UV0.Add(FVector2D(UStart, 1));
        //UV0.Add(FVector2D(UEnd, 0));
        //UV0.Add(FVector2D(UEnd, 1));

        // ������ ��
        /*VertexColors.Add(FLinearColor::Red);
        VertexColors.Add(FLinearColor::Red);
        VertexColors.Add(FLinearColor::Red);
        VertexColors.Add(FLinearColor::Red);*/