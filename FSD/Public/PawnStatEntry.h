#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine FastArraySerializerItem
#include "PawnStatEntry.generated.h"

class UPawnStat;

USTRUCT(BlueprintType)
struct FPawnStatEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UPawnStat* PawnStat;
    
    UPROPERTY(Transient)
    float Value;
    
    FSD_API FPawnStatEntry();
};

