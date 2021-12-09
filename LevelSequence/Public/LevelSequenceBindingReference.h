#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject SoftObjectPath
#include "LevelSequenceBindingReference.generated.h"

USTRUCT(BlueprintType)
struct FLevelSequenceBindingReference {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FString PackageName;
    
    UPROPERTY()
    FSoftObjectPath ExternalObjectPath;
    
    UPROPERTY()
    FString ObjectPath;
    
public:
    LEVELSEQUENCE_API FLevelSequenceBindingReference();
};

