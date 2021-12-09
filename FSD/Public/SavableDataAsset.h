#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "SaveGameIDInterface.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "SavableDataAsset.generated.h"

class UBuildRestriction;

UCLASS(BlueprintType)
class USavableDataAsset : public UDataAsset, public ISaveGameIDInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool EnableDangerousSaveGameIDEditing;
    
    UPROPERTY(EditAnywhere)
    FGuid SaveGameID;
    
    UPROPERTY(EditAnywhere)
    UBuildRestriction* BuildRestriction;
    
public:
    UFUNCTION(BlueprintPure)
    FGuid GetSavegameID() const;
    
    USavableDataAsset();
};

