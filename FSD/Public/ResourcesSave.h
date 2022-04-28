#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ResourcesSave.generated.h"

class UResourceData;

USTRUCT(BlueprintType)
struct FResourcesSave {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FGuid, float> OwnedResources;
    
private:
    UPROPERTY(EditAnywhere)
    TMap<UResourceData*, float> Resources;
    
public:
    FSD_API FResourcesSave();
};

