// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUserWidget.h"

#include "Components/Button.h"
#include "MyCurve.h"

void UMyUserWidget::NativeConstruct()
{
    Super::NativeConstruct();

    // 버튼 클릭 이벤트 연결
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
        // 알파 값을 0.5로 설정
        ColorActor->SetAlphaValue(0.5f);
    }
}