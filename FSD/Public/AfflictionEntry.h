#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "AfflictionEntry.generated.h"

class UPawnAffliction;

USTRUCT(BlueprintType)
struct FAfflictionEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPawnAffliction* Affliction;
    
    FSD_API FAfflictionEntry();
};

