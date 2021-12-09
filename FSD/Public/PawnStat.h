#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "EPawnStatType.h"
#include "PawnStat.generated.h"

UCLASS()
class UPawnStat : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float StartingValue;
    
    UPROPERTY(EditAnywhere)
    EPawnStatType PawnStatType;
    
    UPROPERTY(EditAnywhere)
    EPawnStatType ValueModificationType;
    
public:
    UPawnStat();
};

