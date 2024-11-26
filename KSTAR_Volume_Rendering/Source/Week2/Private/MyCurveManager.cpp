#include "MyCurveManager.h"
#include "Blueprint/WidgetTree.h"
#include "Components/Button.h"
#include "Components/SpinBox.h"

AMyCurveManager::AMyCurveManager()
{
    PrimaryActorTick.bCanEverTick = false;
}

void AMyCurveManager::BeginPlay()
{
    Super::BeginPlay();

    if (RemoteWidgetClass)
    {
        RemoteWidgetInstance = CreateWidget<UUserWidget>(GetWorld(), RemoteWidgetClass);
        if (RemoteWidgetInstance)
        {
            // Remote 위젯에서 버튼 찾기 및 이벤트 바인딩
            UButton* CurveChangeButton = Cast<UButton>(RemoteWidgetInstance->WidgetTree->FindWidget(TEXT("CurveChange")));

            //CurveChangeButton이 눌렸을 때 OnCurveChangeClicked를 실행하도록 연결
            if (CurveChangeButton)
            {            
                CurveChangeButton->OnClicked.AddDynamic(this, &AMyCurveManager::OnCurveChangeClicked);
            }
        }
    }
}

//커브 체인지 버튼이 눌렸을 때 실행할 함수 OnCurveChangeClicked()
void AMyCurveManager::OnCurveChangeClicked()
{

    if (CurveBase && RemoteWidgetInstance)
    {
        // 위젯에서 스핀박스 값 가져와서 SetAllAlphaInRange 함수 실행

        SetAllAlphaInRange(Start, End, 0.5f);//시작 지접부터 끝 지점까지 알파값을 0.5로 지정
    }
}

//컬러커브의 알파값의 키 배열을 리셋 한 후, 범위 입력과 알파값 입력에 따라 새로운 키 4개를 생성 
void AMyCurveManager::SetAllAlphaInRange(float StartTime, float EndTime, float NewAlpha)
{
    FRichCurve& AlphaCurve = CurveBase->FloatCurves[3];//FloatCurves[3] = alpha값
    AlphaCurve.Reset();//키 배열을 리셋
  
    //범위 입력에 맞게 컬러커브의 알파값에 키 배열 생성
    //예) 입력값 0.3, 0.8, 0.5이면 (0.29, 0.0),(0.3, 0.5), (0.8, 0.5), (0.81, 0.0)으로 4개의 키 생성
    FKeyHandle NewKeyHandleStart = AlphaCurve.AddKey(StartTime, NewAlpha);
    FKeyHandle NewKeyHandleEnd = AlphaCurve.AddKey(EndTime, NewAlpha);
    FKeyHandle NewKeyHandleBeforeStart = AlphaCurve.AddKey(StartTime-0.01, 0);
    FKeyHandle NewKeyHandleAfterEnd = AlphaCurve.AddKey(EndTime+0.01, 0);

}


