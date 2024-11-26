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

    // 에디터에서 설정할 수 있는 컬러 커브
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Curve")
    UCurveLinearColor* CurveBase;

    // 기존에 만든 remote 위젯을 연결하기 위한 클래스 참조
    UPROPERTY(EditAnywhere, Category = "UI")
    TSubclassOf<UUserWidget> RemoteWidgetClass;



private:
    UUserWidget* RemoteWidgetInstance;

    // 특정 시간 범위의 알파 값을 설정하는 함수 선언
    void SetAllAlphaInRange(float StartTime, float EndTime, float NewAlpha);

public:
    // 이 함수와 변수들을 위젯 블루프린트에서 호출 가능하도록 UFUNCTION을 이용하여 설정
    UFUNCTION(BlueprintCallable, Category = "Curve")
    void OnCurveChangeClicked();

    UPROPERTY(BlueprintReadWrite, Category = "YourCategory")
    float Start = 0.0;

    UPROPERTY(BlueprintReadWrite, Category = "YourCategory")
    float End = 1.0;

};