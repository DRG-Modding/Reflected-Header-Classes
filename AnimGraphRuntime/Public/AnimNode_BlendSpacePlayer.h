#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNode_AssetPlayerBase
#include "AnimNode_BlendSpacePlayer.generated.h"

class UBlendSpaceBase;

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Z;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bResetPlayTimeWhenBlendSpaceChanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBlendSpaceBase* BlendSpace;
    
protected:
    UPROPERTY(Transient)
    UBlendSpaceBase* PreviousBlendSpace;
    
public:
    FAnimNode_BlendSpacePlayer();
};

