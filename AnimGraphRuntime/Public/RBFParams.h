#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine EBoneAxis
#include "ERBFSolverType.h"
#include "ERBFDistanceMethod.h"
#include "ERBFFunctionType.h"
#include "ERBFNormalizeMethod.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "RBFParams.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FRBFParams {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 TargetDimensions;
    
    UPROPERTY(EditAnywhere)
    ERBFSolverType SolverType;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    ERBFFunctionType Function;
    
    UPROPERTY(EditAnywhere)
    ERBFDistanceMethod DistanceMethod;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneAxis> TwistAxis;
    
    UPROPERTY(EditAnywhere)
    float WeightThreshold;
    
    UPROPERTY(EditAnywhere)
    ERBFNormalizeMethod NormalizeMethod;
    
    UPROPERTY(EditAnywhere)
    FVector MedianReference;
    
    UPROPERTY(EditAnywhere)
    float MedianMin;
    
    UPROPERTY(EditAnywhere)
    float MedianMax;
    
    FRBFParams();
};

