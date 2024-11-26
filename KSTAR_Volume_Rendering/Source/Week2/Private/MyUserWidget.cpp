// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUserWidget.h"

#include "Components/Button.h"
#include "MyCurve.h"

void UMyUserWidget::NativeConstruct()
{
    Super::NativeConstruct();

    // ��ư Ŭ�� �̺�Ʈ ����
    if (ChangeButton)
    {
        ChangeButton->OnClicked.AddDynamic(this, &UMyUserWidget::OnChangeButtonClicked);
    }
}

void UMyUserWidget::OnChangeButtonClicked()
{
    UE_LOG(LogTemp, Warning, TEXT("Button clicked!"));
    if (ColorActor)
    {
        // ���� ���� 0.5�� ����
        ColorActor->SetAlphaValue(0.5f);
    }
}