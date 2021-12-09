#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "GameDLCSettings.generated.h"

class UObject;
class UGameDLC;

UCLASS(BlueprintType)
class FSD_API UGameDLCSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSet<UGameDLC*> StoreDLCs;
    
public:
    UFUNCTION(BlueprintPure)
    TArray<UGameDLC*> GetStoreDLCs(UObject* WorldContext);
    
protected:
    UFUNCTION(BlueprintPure)
    TArray<UGameDLC*> GetAnnouncableDLCs(UObject* WorldContext);
    
public:
    UGameDLCSettings();
};

