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
            // Remote �������� ��ư ã�� �� �̺�Ʈ ���ε�
            UButton* CurveChangeButton = Cast<UButton>(RemoteWidgetInstance->WidgetTree->FindWidget(TEXT("CurveChange")));

            //CurveChangeButton�� ������ �� OnCurveChangeClicked�� �����ϵ��� ����
            if (CurveChangeButton)
            {            
                CurveChangeButton->OnClicked.AddDynamic(this, &AMyCurveManager::OnCurveChangeClicked);
            }
        }
    }
}

//Ŀ�� ü���� ��ư�� ������ �� ������ �Լ� OnCurveChangeClicked()
void AMyCurveManager::OnCurveChangeClicked()
{

    if (CurveBase && RemoteWidgetInstance)
    {
        // �������� ���ɹڽ� �� �����ͼ� SetAllAlphaInRange �Լ� ����

        SetAllAlphaInRange(Start, End, 0.5f);//���� �������� �� �������� ���İ��� 0.5�� ����
    }
}

//�÷�Ŀ���� ���İ��� Ű �迭�� ���� �� ��, ���� �Է°� ���İ� �Է¿� ���� ���ο� Ű 4���� ���� 
void AMyCurveManager::SetAllAlphaInRange(float StartTime, float EndTime, float NewAlpha)
{
    FRichCurve& AlphaCurve = CurveBase->FloatCurves[3];//FloatCurves[3] = alpha��
    AlphaCurve.Reset();//Ű �迭�� ����
  
    //���� �Է¿� �°� �÷�Ŀ���� ���İ��� Ű �迭 ����
    //��) �Է°� 0.3, 0.8, 0.5�̸� (0.29, 0.0),(0.3, 0.5), (0.8, 0.5), (0.81, 0.0)���� 4���� Ű ����
    FKeyHandle NewKeyHandleStart = AlphaCurve.AddKey(StartTime, NewAlpha);
    FKeyHandle NewKeyHandleEnd = AlphaCurve.AddKey(EndTime, NewAlpha);
    FKeyHandle NewKeyHandleBeforeStart = AlphaCurve.AddKey(StartTime-0.01, 0);
    FKeyHandle NewKeyHandleAfterEnd = AlphaCurve.AddKey(EndTime+0.01, 0);

}


