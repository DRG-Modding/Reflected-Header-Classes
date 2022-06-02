#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "CustomKeySetting.h"
#include "EKeyBindingSlot.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "InputCaptureWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FSD_API UInputCaptureWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomKeySetting Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKeyBindingSlot InputSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGamepadKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCapturing;
    
public:
    UInputCaptureWidget();
    UFUNCTION(BlueprintCallable)
    void SetData(const FCustomKeySetting InSettings, EKeyBindingSlot InInputSlot, bool InIsGamepadKey);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCurrentBinding(const FKey& InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveKeyChanged(FKey InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveKeyCaptured(FKey InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveCapturingChanged(bool InCapturing);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetCurrentBinding() const;
    
    UFUNCTION(BlueprintCallable)
    bool FindCurrentSettingsForKey(const FKey& InKey, FCustomKeySetting& OutSettings);
    
    UFUNCTION(BlueprintCallable)
    void ClearCurrentBinding();
    
    UFUNCTION(BlueprintCallable)
    void BindActionToKey(const FCustomKeySetting& InAction, const FKey& InKey, EKeyBindingSlot InSlot, bool SaveToDisk);
    
};

