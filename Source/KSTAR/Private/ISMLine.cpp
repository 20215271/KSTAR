// Fill out your copyright notice in the Description page of Project Settings.


#include "ISMLine.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "PositionLoader.h"


// Sets default values
AISMLine::AISMLine()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	HISMComponent = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HISMComponent"));
	RootComponent = HISMComponent;

	FilePath = "";
}

// Called when the game starts or when spawned
void AISMLine::BeginPlay()
{
	Super::BeginPlay();
	Positions = PositionLoader::LoadPositions(FilePath);
    CreateMesh(Positions);
}

// Called every frame
void AISMLine::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AISMLine::CreateMesh(const TArray<FVector>& Points) {
    HISMComponent->SetStaticMesh(StaticMesh); // StaticMesh ����
    HISMComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    HISMComponent->SetMobility(EComponentMobility::Static); // �̵� ���� ����
    HISMComponent->SetCanEverAffectNavigation(false);
    HISMComponent->SetCastShadow(false);
    HISMComponent->RegisterComponent(); // ������Ʈ�� ������ ���

    float Width = 1.0f;

    for (int32 i = 0; i < Points.Num() - 1; i++)
    {
        FVector StartPoint = Points[i];
        FVector EndPoint = Points[i + 1];

        // �� �� ������ ���� ���� ����ȭ
        FVector Direction = (EndPoint - StartPoint).GetSafeNormal();
        FVector RightVector = FVector::CrossProduct(Direction, FVector(0, 0, 1)).GetSafeNormal();

        // �簢���� �߽� ��ǥ ���
        FVector MidPoint = (StartPoint + EndPoint) * 0.5f;

        // �� �簢��(�޽�)�� ��ȯ�� ���� (��ġ, ȸ��, ������)
        FTransform InstanceTransform;
        InstanceTransform.SetLocation(MidPoint); // �߰� ��ġ ����

        // ���� ���⿡ ���� ȸ�� ����
        FQuat Rotation = FQuat::FindBetweenNormals(FVector::ForwardVector, Direction);
        InstanceTransform.SetRotation(Rotation);

        // �簢���� ���̸� ���� ���̿� �°� ������ ����
        float Distance = FVector::Dist(StartPoint, EndPoint);
        InstanceTransform.SetScale3D(FVector(Distance, Width, 1.0f)); // X���� ����, Y���� ��, Z�� �β�

        // �ν��Ͻ� �߰� (�簢�� �޽ø� �ν��Ͻ��� �߰�)
        HISMComponent->AddInstance(InstanceTransform);
    }

    // ��Ƽ���� ����
    if (LineMaterial)
    {
        HISMComponent->SetMaterial(0, LineMaterial);
    }
}

