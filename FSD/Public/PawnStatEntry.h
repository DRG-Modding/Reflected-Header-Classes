#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "PawnStatEntry.generated.h"

class UPawnStat;

USTRUCT(BlueprintType)
struct FPawnStatEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPawnStat* PawnStat;
    
    UPROPERTY(EditAnywhere, Transient)
    float Value;
    
    FSD_API FPawnStatEntry();
};

