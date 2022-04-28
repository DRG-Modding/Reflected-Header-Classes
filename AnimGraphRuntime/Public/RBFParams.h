#pragma once
#include "CoreMinimal.h"
#include "ERBFFunctionType.h"
#include "ERBFSolverType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ERBFNormalizeMethod.h"
#include "ERBFDistanceMethod.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EBoneAxis -FallbackName=EBoneAxis
#include "RBFParams.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FRBFParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetDimensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERBFSolverType SolverType;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutomaticRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERBFFunctionType Function;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERBFDistanceMethod DistanceMethod;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneAxis> TwistAxis;
    
    UPROPERTY(EditAnywhere)
    float WeightThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERBFNormalizeMethod NormalizeMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MedianReference;
    
    UPROPERTY(EditAnywhere)
    float MedianMin;
    
    UPROPERTY(EditAnywhere)
    float MedianMax;
    
    FRBFParams();
};

