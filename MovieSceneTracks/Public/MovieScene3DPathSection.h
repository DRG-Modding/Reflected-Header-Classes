#pragma once
#include "CoreMinimal.h"
#include "MovieScene3DConstraintSection.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneFloatChannel
#include "MovieScene3DPathSection_Axis.h"
#include "MovieScene3DPathSection.generated.h"

UCLASS(MinimalAPI)
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneFloatChannel TimingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    MovieScene3DPathSection_Axis FrontAxisEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    MovieScene3DPathSection_Axis UpAxisEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bFollow: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bReverse: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bForceUpright: 1;
    
    UMovieScene3DPathSection();
};

