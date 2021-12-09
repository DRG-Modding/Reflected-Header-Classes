#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Interface
#include "BlackboardAssetProvider.generated.h"

class UBlackboardData;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UBlackboardAssetProvider : public UInterface {
    GENERATED_BODY()
};

class IBlackboardAssetProvider : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual  return NULL; GetBlackboardAsset() const PURE_VIRTUAL(GetBlackboardAsset,);
    
};

