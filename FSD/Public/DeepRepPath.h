#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EDeepMovementState.h"
#include "DeepRepPath.generated.h"

USTRUCT(BlueprintType)
struct FDeepRepPath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector PathBase;
    
    UPROPERTY(EditAnywhere, Transient)
    uint8 PathLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EDeepMovementState State;
    
    UPROPERTY(EditAnywhere, Transient)
    uint8 StateBits;
    
    UPROPERTY(EditAnywhere, Transient)
    FVector PathOffsets[16];
    
    FSD_API FDeepRepPath();
};

