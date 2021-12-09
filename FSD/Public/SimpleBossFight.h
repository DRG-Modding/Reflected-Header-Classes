#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "BossFight.h"
#include "BossFightInterface.h"
#include "SimpleBossFight.generated.h"

UCLASS(BlueprintType)
class USimpleBossFight : public UObject, public IBossFightInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FBossFight BossFight;
    
    USimpleBossFight();
};

