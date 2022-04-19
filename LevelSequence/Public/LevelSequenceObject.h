#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceObject.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FLevelSequenceObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TLazyObjectPtr<UObject> ObjectOrOwner;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString ComponentName;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> CachedComponent;
    
public:
    LEVELSEQUENCE_API FLevelSequenceObject();
};

