#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "LevelSequenceBindingReference.generated.h"

USTRUCT(BlueprintType)
struct FLevelSequenceBindingReference {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString PackageName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ExternalObjectPath;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString ObjectPath;
    
public:
    LEVELSEQUENCE_API FLevelSequenceBindingReference();
};

