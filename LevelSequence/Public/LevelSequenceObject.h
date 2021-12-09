#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceObject.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FLevelSequenceObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TLazyObjectPtr<UObject> ObjectOrOwner;
    
    UPROPERTY()
    FString ComponentName;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UObject> CachedComponent;
    
public:
    LEVELSEQUENCE_API FLevelSequenceObject();
};

