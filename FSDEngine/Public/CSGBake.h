#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "BakeSettings.h"
#include "BakeEntry.h"
//CROSS-MODULE INCLUDE: CoreUObject Box
#include "CSGBake.generated.h"

class ACSGBuilder;
class UBakeConfig;

UCLASS(BlueprintType, MinimalAPI)
class UCSGBake : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBakeSettings BakeSettings;
    
    UPROPERTY(EditAnywhere)
    int32 NumVariations;
    
    UPROPERTY(EditAnywhere)
    int32 InitialSeed;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<ACSGBuilder> CSG;
    
    UPROPERTY(VisibleAnywhere)
    FString Status;
    
    UPROPERTY(VisibleAnywhere)
    FBox CombinedAABB;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FBakeEntry> Entries;
    
    UPROPERTY(Transient)
    bool IsBaking;
    
    UPROPERTY(Transient)
    TArray<UBakeConfig*> CurrentBakeConfigs;
    
    UPROPERTY(Transient)
    ACSGBuilder* CDO;
    
    UFUNCTION(BlueprintCallable)
    void Bake();
    
    UCSGBake();
};

