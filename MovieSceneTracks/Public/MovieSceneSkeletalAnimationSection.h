#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSection
#include "MovieSceneSkeletalAnimationParams.h"
#include "MovieSceneSkeletalAnimationSection.generated.h"

class UAnimSequence;
class UAnimSequenceBase;

UCLASS(MinimalAPI)
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMovieSceneSkeletalAnimationParams Params;
    
private:
    UPROPERTY()
    UAnimSequence* AnimSequence;
    
    UPROPERTY()
    UAnimSequenceBase* Animation;
    
    UPROPERTY()
    float StartOffset;
    
    UPROPERTY()
    float EndOffset;
    
    UPROPERTY()
    float PlayRate;
    
    UPROPERTY()
    uint8 bReverse: 1;
    
    UPROPERTY()
    FName slotName;
    
public:
    UMovieSceneSkeletalAnimationSection();
};

