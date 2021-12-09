#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG UserWidget
#include "CoolDownProgressStyle.h"
#include "CoolDownProgressWidget.generated.h"

class UObject;

UCLASS(Abstract, EditInlineNew)
class UCoolDownProgressWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FCoolDownProgressStyle Style;
    
    UPROPERTY(BlueprintReadWrite)
    TWeakObjectPtr<UObject> CoolDownObject;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsFinished;
    
    UFUNCTION(BlueprintCallable)
    void UpdateProgress(float Progress);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveUpdateProgress(float InProgress);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveInitWidget();
    
    UFUNCTION(BlueprintCallable)
    void Init(UObject* InCoolDownObject, const FCoolDownProgressStyle& InStyle);
    
public:
    UCoolDownProgressWidget();
};
