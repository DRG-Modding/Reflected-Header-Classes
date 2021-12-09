#pragma once
#include "CoreMinimal.h"
#include "RBFEntry.h"
//CROSS-MODULE INCLUDE: Engine RichCurve
#include "ERBFFunctionType.h"
#include "ERBFDistanceMethod.h"
#include "RBFTarget.generated.h"

USTRUCT()
struct ANIMGRAPHRUNTIME_API FRBFTarget : public FRBFEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ScaleFactor;
    
    UPROPERTY(EditAnywhere)
    bool bApplyCustomCurve;
    
    UPROPERTY(EditAnywhere)
    FRichCurve CustomCurve;
    
    UPROPERTY(EditAnywhere)
    ERBFDistanceMethod DistanceMethod;
    
    UPROPERTY(EditAnywhere)
    ERBFFunctionType FunctionType;
    
    FRBFTarget();
};

