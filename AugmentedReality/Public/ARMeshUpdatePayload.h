#pragma once
#include "CoreMinimal.h"
#include "ARSessionPayload.h"
#include "EARObjectClassification.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ARMeshUpdatePayload.generated.h"

USTRUCT(BlueprintType)
struct FARMeshUpdatePayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FARSessionPayload SessionPayload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform WorldTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EARObjectClassification ObjectClassification;
    
    AUGMENTEDREALITY_API FARMeshUpdatePayload();
};

