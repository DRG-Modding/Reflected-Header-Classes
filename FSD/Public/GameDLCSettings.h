#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "GameDLCSettings.generated.h"

class UGameDLC;
class UObject;

UCLASS(Blueprintable)
class FSD_API UGameDLCSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UGameDLC*> StoreDLCs;
    
public:
    UGameDLCSettings();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UGameDLC*> GetStoreDLCs(UObject* WorldContext);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UGameDLC*> GetAnnouncableDLCs(UObject* WorldContext);
    
};

