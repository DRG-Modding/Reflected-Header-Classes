#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "GameplayTagsDeveloperSettings.generated.h"

UCLASS(NotPlaceable, Config=GameplayTags)
class GAMEPLAYTAGS_API UGameplayTagsDeveloperSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FString DeveloperConfigName;
    
    UGameplayTagsDeveloperSettings();
};

