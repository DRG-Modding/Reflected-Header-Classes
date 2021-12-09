#pragma once
#include "CoreMinimal.h"
#include "GameplayTag.h"
#include "GameplayTagQuery.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYTAGS_API FGameplayTagQuery {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int32 TokenStreamVersion;
    
    UPROPERTY(EditAnywhere)
    TArray<FGameplayTag> TagDictionary;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> QueryTokenStream;
    
    UPROPERTY(EditAnywhere)
    FString UserDescription;
    
    UPROPERTY(EditAnywhere)
    FString AutoDescription;
    
public:
    FGameplayTagQuery();
};

