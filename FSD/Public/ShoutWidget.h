#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ShoutWidget.generated.h"

class APlayerCharacter;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UShoutWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<APlayerCharacter> Sender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(EditAnywhere, Transient)
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsSubtitle;
    
public:
    UShoutWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShout();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetTimeString(int32 Seconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetSplitTimeString(int32 Seconds, FString& MinutesString, FString& SecondsString);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCountDownString(int32 Seconds) const;
    
};

