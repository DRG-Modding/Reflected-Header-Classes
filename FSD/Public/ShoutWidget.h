#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG UserWidget
#include "ShoutWidget.generated.h"

class APlayerCharacter;

UCLASS(Abstract, EditInlineNew)
class UShoutWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<APlayerCharacter> Sender;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText Text;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Duration;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsSubtitle;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShout();
    
public:
    UFUNCTION(BlueprintPure)
    static FString GetTimeString(int32 Seconds);
    
    UFUNCTION(BlueprintPure)
    static void GetSplitTimeString(int32 Seconds, FString& MinutesString, FString& SecondsString);
    
protected:
    UFUNCTION(BlueprintPure)
    FString GetCountDownString(int32 Seconds) const;
    
public:
    UShoutWidget();
};

