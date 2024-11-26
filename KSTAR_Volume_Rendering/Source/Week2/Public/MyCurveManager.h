// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Curves/CurveLinearColor.h"
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Curves/CurveLinearColor.h"
#include "Blueprint/UserWidget.h"
#include "MyCurveManager.generated.h"


UCLASS()
class WEEK2_API AMyCurveManager : public AActor
{
    GENERATED_BODY()


public:
    AMyCurveManager();



protected:
    virtual void BeginPlay() override;

    // �����Ϳ��� ������ �� �ִ� �÷� Ŀ��
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Curve")
    UCurveLinearColor* CurveBase;

    // ������ ���� remote ������ �����ϱ� ���� Ŭ���� ����
    UPROPERTY(EditAnywhere, Category = "UI")
    TSubclassOf<UUserWidget> RemoteWidgetClass;



private:
    UUserWidget* RemoteWidgetInstance;

    // Ư�� �ð� ������ ���� ���� �����ϴ� �Լ� ����
    void SetAllAlphaInRange(float StartTime, float EndTime, float NewAlpha);

public:
    // �� �Լ��� �������� ���� �������Ʈ���� ȣ�� �����ϵ��� UFUNCTION�� �̿��Ͽ� ����
    UFUNCTION(BlueprintCallable, Category = "Curve")
    void OnCurveChangeClicked();

    UPROPERTY(BlueprintReadWrite, Category = "YourCategory")
    float Start = 0.0;

    UPROPERTY(BlueprintReadWrite, Category = "YourCategory")
    float End = 1.0;

};