#pragma once
#include "CoreMinimal.h"
#include "ARSessionPayload.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EARObjectClassification.h"
#include "ARMeshUpdatePayload.generated.h"

USTRUCT(BlueprintType)
struct FARMeshUpdatePayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FARSessionPayload SessionPayload;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTransform WorldTransform;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EARObjectClassification ObjectClassification;
    
    AUGMENTEDREALITY_API FARMeshUpdatePayload();
};

