#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "TimeSynthClipSound.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "TimeSynthTimeDef.h"
#include "ETimeSynthEventClipQuantization.h"
#include "TimeSynthClip.generated.h"

UCLASS(BlueprintType)
class TIMESYNTH_API UTimeSynthClip : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FTimeSynthClipSound> Sounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D VolumeScaleDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D PitchScaleSemitones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTimeSynthTimeDef FadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bApplyFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTimeSynthTimeDef FadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTimeSynthTimeDef ClipDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETimeSynthEventClipQuantization ClipQuantization;
    
    UTimeSynthClip();
};

