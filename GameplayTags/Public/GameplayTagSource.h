#pragma once
#include "CoreMinimal.h"
#include "EGameplayTagSourceType.h"
#include "GameplayTagSource.generated.h"

class UGameplayTagsList;
class URestrictedGameplayTagsList;

USTRUCT(BlueprintType)
struct FGameplayTagSource {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName SourceName;
    
    UPROPERTY()
    EGameplayTagSourceType SourceType;
    
    UPROPERTY()
    UGameplayTagsList* SourceTagList;
    
    UPROPERTY()
    URestrictedGameplayTagsList* SourceRestrictedTagList;
    
    GAMEPLAYTAGS_API FGameplayTagSource();
};

