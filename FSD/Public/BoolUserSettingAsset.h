#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "BoolUserSettingAsset.generated.h"

UCLASS(BlueprintType)
class FSD_API UBoolUserSettingAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText SettingDisplayTitle;
    
    UPROPERTY(EditAnywhere)
    FName SettingID;
    
    UPROPERTY(EditAnywhere)
    bool SettingDefaultValue;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetValue(bool InValue);
    
    UFUNCTION(BlueprintPure)
    bool GetValue() const;
    
    UBoolUserSettingAsset();
};

