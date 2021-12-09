#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNode_Base
//CROSS-MODULE INCLUDE: Engine PoseLink
#include "AnimNode_CurveSource.generated.h"

class UCurveSourceInterface;
class ICurveSourceInterface;

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_CurveSource : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink SourcePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SourceBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float alpha;
    
    UPROPERTY(Transient)
    TScriptInterface<ICurveSourceInterface> CurveSource;
    
    FAnimNode_CurveSource();
};

