#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EscortMulePath.generated.h"

USTRUCT(BlueprintType)
struct FEscortMulePath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FVector> Path;
    
    FSD_API FEscortMulePath();
};

