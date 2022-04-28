#pragma once
#include "CoreMinimal.h"
#include "RBFEntry.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "ERBFDistanceMethod.h"
#include "ERBFFunctionType.h"
#include "RBFTarget.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FRBFTarget : public FRBFEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ScaleFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyCustomCurve;
    
    UPROPERTY(EditAnywhere)
    FRichCurve CustomCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERBFDistanceMethod DistanceMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERBFFunctionType FunctionType;
    
    FRBFTarget();
};

