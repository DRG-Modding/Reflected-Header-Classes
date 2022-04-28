#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_AssetPlayerBase -FallbackName=AnimNode_AssetPlayerBase
#include "AnimNode_BlendSpacePlayer.generated.h"

class UBlendSpaceBase;

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float X;
    
    UPROPERTY(EditAnywhere)
    float Y;
    
    UPROPERTY(EditAnywhere)
    float Z;
    
    UPROPERTY(EditAnywhere)
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetPlayTimeWhenBlendSpaceChanges;
    
    UPROPERTY(EditAnywhere)
    float StartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* BlendSpace;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* PreviousBlendSpace;
    
public:
    FAnimNode_BlendSpacePlayer();
};

