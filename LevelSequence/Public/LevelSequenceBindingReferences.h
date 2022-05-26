#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceBindingReferenceArray.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "LevelSequenceBindingReferences.generated.h"

USTRUCT(BlueprintType)
struct FLevelSequenceBindingReferences {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FLevelSequenceBindingReferenceArray> BindingIdToReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGuid> AnimSequenceInstances;
    
public:
    LEVELSEQUENCE_API FLevelSequenceBindingReferences();
};

