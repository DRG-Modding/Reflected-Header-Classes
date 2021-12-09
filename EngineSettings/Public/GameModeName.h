#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject SoftClassPath
#include "GameModeName.generated.h"

USTRUCT(BlueprintType)
struct FGameModeName {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Name;
    
    UPROPERTY(EditAnywhere)
    FSoftClassPath GameMode;
    
    ENGINESETTINGS_API FGameModeName();
};

