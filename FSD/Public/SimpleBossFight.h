#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BossFightInterface.h"
#include "BossFight.h"
#include "SimpleBossFight.generated.h"

UCLASS(Blueprintable)
class USimpleBossFight : public UObject, public IBossFightInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossFight BossFight;
    
    USimpleBossFight();
    
    // Fix for true pure virtual functions not being implemented
};

