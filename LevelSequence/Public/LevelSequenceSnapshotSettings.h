#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "LevelSequenceSnapshotSettings.generated.h"

USTRUCT(BlueprintType)
struct FLevelSequenceSnapshotSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ZeroPadAmount;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FFrameRate FrameRate;
    
    LEVELSEQUENCE_API FLevelSequenceSnapshotSettings();
};

