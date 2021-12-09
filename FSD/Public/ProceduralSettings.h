#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "ProceduralSettings.generated.h"

class URoomDecorationObject;

UCLASS()
class UProceduralSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    URoomDecorationObject* MiningpodCalldownLocationDecoration;
    
    UProceduralSettings();
};

