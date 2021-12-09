#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "EnvQuery.generated.h"

class UEnvQueryOption;

UCLASS()
class AIMODULE_API UEnvQuery : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FName QueryName;
    
    UPROPERTY()
    TArray<UEnvQueryOption*> options;
    
public:
    UEnvQuery();
};

