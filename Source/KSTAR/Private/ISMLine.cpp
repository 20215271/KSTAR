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
    HISMComponent->SetStaticMesh(StaticMesh); // StaticMesh 설정
    HISMComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    HISMComponent->SetMobility(EComponentMobility::Static); // 이동 가능 설정
    HISMComponent->SetCanEverAffectNavigation(false);
    HISMComponent->SetCastShadow(false);
    HISMComponent->RegisterComponent(); // 컴포넌트를 레벨에 등록

    float Width = 1.0f;

    for (int32 i = 0; i < Points.Num() - 1; i++)
    {
        FVector StartPoint = Points[i];
        FVector EndPoint = Points[i + 1];

        // 두 점 사이의 방향 벡터 정규화
        FVector Direction = (EndPoint - StartPoint).GetSafeNormal();
        FVector RightVector = FVector::CrossProduct(Direction, FVector(0, 0, 1)).GetSafeNormal();

        // 사각형의 중심 좌표 계산
        FVector MidPoint = (StartPoint + EndPoint) * 0.5f;

        // 각 사각형(메시)의 변환을 설정 (위치, 회전, 스케일)
        FTransform InstanceTransform;
        InstanceTransform.SetLocation(MidPoint); // 중간 위치 설정

        // 라인 방향에 따라 회전 설정
        FQuat Rotation = FQuat::FindBetweenNormals(FVector::ForwardVector, Direction);
        InstanceTransform.SetRotation(Rotation);

        // 사각형의 길이를 라인 길이에 맞게 스케일 적용
        float Distance = FVector::Dist(StartPoint, EndPoint);
        InstanceTransform.SetScale3D(FVector(Distance, Width, 1.0f)); // X축은 길이, Y축은 폭, Z는 두께

        // 인스턴스 추가 (사각형 메시를 인스턴스로 추가)
        HISMComponent->AddInstance(InstanceTransform);
    }

    // 머티리얼 설정
    if (LineMaterial)
    {
        HISMComponent->SetMaterial(0, LineMaterial);
    }
}

