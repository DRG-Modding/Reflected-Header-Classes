#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "BuildRestriction.generated.h"

UCLASS()
class UBuildRestriction : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 BuildType;
    
    UPROPERTY(EditAnywhere)
    int32 Platform;
    
public:
    UBuildRestriction();
};

