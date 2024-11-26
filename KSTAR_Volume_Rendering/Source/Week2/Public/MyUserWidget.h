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
    AMyCurve* ColorActor;  // ���� ���� �߰�

private:
    UFUNCTION()
    void OnChangeButtonClicked();  // ��ư Ŭ�� �̺�Ʈ ó��

    UPROPERTY(meta = (BindWidget))
    class UButton* ChangeButton;  // ��ư ����
};
