#pragma once
#include "CoreMinimal.h"
#include "EActorSequenceObjectReferenceType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ActorSequenceObjectReference.generated.h"

USTRUCT(BlueprintType)
struct FActorSequenceObjectReference {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActorSequenceObjectReferenceType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ActorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PathToComponent;
    
public:
    ACTORSEQUENCE_API FActorSequenceObjectReference();
};

