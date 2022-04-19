#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ResourcesSave.generated.h"

class UResourceData;

USTRUCT(BlueprintType)
struct FResourcesSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<FGuid, float> OwnedResources;
    
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<UResourceData*, float> Resources;
    
public:
    FSD_API FResourcesSave();
};

