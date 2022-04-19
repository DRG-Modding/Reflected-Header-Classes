#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SaveGameIDInterface.h"
#include "SavableDataAsset.generated.h"

class UBuildRestriction;

UCLASS(BlueprintType)
class USavableDataAsset : public UDataAsset, public ISaveGameIDInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableDangerousSaveGameIDEditing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SavegameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBuildRestriction* BuildRestriction;
    
public:
    USavableDataAsset();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetSavegameID() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

