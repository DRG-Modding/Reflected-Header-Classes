#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "BlackboardEntry.h"
#include "BlackboardData.generated.h"

class UBlackboardData;

UCLASS()
class AIMODULE_API UBlackboardData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UBlackboardData* Parent;
    
    UPROPERTY(EditAnywhere)
    TArray<FBlackboardEntry> Keys;
    
private:
    UPROPERTY()
    uint8 bHasSynchronizedKeys: 1;
    
public:
    UBlackboardData();
};

