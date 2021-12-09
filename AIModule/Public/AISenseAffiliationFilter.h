#pragma once
#include "CoreMinimal.h"
#include "AISenseAffiliationFilter.generated.h"

USTRUCT(BlueprintType)
struct AIMODULE_API FAISenseAffiliationFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bDetectEnemies: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bDetectNeutrals: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bDetectFriendlies: 1;
    
    FAISenseAffiliationFilter();
};

