#pragma once
#include "CoreMinimal.h"
#include "Formation.generated.h"

class UFormationData;

USTRUCT()
struct FFormation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UFormationData* FormationData;
    
    FSD_API FFormation();
};

