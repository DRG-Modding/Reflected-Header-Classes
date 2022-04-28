#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AlphaBlend -FallbackName=AlphaBlend
#include "RandomPlayerSequenceEntry.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FRandomPlayerSequenceEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Sequence;
    
    UPROPERTY(EditAnywhere)
    float ChanceToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinLoopCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLoopCount;
    
    UPROPERTY(EditAnywhere)
    float MinPlayRate;
    
    UPROPERTY(EditAnywhere)
    float MaxPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlphaBlend BlendIn;
    
    ANIMGRAPHRUNTIME_API FRandomPlayerSequenceEntry();
};

