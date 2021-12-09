#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine FastArraySerializerItem
#include "AfflictionEntry.generated.h"

class UPawnAffliction;

USTRUCT(BlueprintType)
struct FAfflictionEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UPawnAffliction* Affliction;
    
    FSD_API FAfflictionEntry();
};

