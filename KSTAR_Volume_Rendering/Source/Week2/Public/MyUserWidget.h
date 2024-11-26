// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyCurve.h"
#include "MyUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class WEEK2_API UMyUserWidget : public UUserWidget
{
	GENERATED_BODY()
public:
    virtual void NativeConstruct() override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "References")
    AMyCurve* ColorActor;  // 액터 참조 추가

private:
    UFUNCTION()
    void OnChangeButtonClicked();  // 버튼 클릭 이벤트 처리

    UPROPERTY(meta = (BindWidget))
    class UButton* ChangeButton;  // 버튼 참조
};
