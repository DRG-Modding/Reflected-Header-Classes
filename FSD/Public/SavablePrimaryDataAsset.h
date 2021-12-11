#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine PrimaryDataAsset
#include "SaveGameIDInterface.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "SavablePrimaryDataAsset.generated.h"

class UBuildRestriction;

UCLASS()
class USavablePrimaryDataAsset : public UPrimaryDataAsset, public ISaveGameIDInterface {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable)
    int32 BuildRestrictions;
    
    UPROPERTY(AssetRegistrySearchable)
    int32 PlatformRestrictions;
    
protected:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool EnableDangerousSaveGameIDEditing;
    
    UPROPERTY(EditAnywhere)
    FGuid SaveGameID;
    
    UPROPERTY(EditAnywhere)
    UBuildRestriction* BuildRestriction;
    
public:
    USavablePrimaryDataAsset();
    
    // Fix for true pure virtual functions not being implemented
};

