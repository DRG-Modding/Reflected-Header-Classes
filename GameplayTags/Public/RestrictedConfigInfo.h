#pragma once
#include "CoreMinimal.h"
#include "RestrictedConfigInfo.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYTAGS_API FRestrictedConfigInfo {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FString RestrictedConfigName;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    TArray<FString> Owners;
    
    FRestrictedConfigInfo();
};

