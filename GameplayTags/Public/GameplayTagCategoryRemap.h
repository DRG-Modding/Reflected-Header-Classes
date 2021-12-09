#pragma once
#include "CoreMinimal.h"
#include "GameplayTagCategoryRemap.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYTAGS_API FGameplayTagCategoryRemap {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString BaseCategory;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> RemapCategories;
    
    FGameplayTagCategoryRemap();
};

