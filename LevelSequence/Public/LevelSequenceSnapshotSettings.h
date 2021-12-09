#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject FrameRate
#include "LevelSequenceSnapshotSettings.generated.h"

USTRUCT(BlueprintType)
struct FLevelSequenceSnapshotSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 ZeroPadAmount;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FFrameRate FrameRate;
    
    LEVELSEQUENCE_API FLevelSequenceSnapshotSettings();
};

