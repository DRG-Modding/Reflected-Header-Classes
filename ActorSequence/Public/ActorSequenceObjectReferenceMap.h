#pragma once
#include "CoreMinimal.h"
#include "ActorSequenceObjectReferences.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ActorSequenceObjectReferenceMap.generated.h"

USTRUCT(BlueprintType)
struct FActorSequenceObjectReferenceMap {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FGuid> BindingIds;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FActorSequenceObjectReferences> References;
    
public:
    ACTORSEQUENCE_API FActorSequenceObjectReferenceMap();
};

