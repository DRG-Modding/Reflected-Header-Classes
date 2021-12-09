#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine ECameraAnimPlaySpace
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "MovieSceneCameraShakeSectionData.generated.h"

class UCameraShake;

USTRUCT(BlueprintType)
struct FMovieSceneCameraShakeSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UCameraShake> ShakeClass;
    
    UPROPERTY(EditAnywhere)
    float PlayScale;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECameraAnimPlaySpace::Type> PlaySpace;
    
    UPROPERTY(EditAnywhere)
    FRotator UserDefinedPlaySpace;
    
    MOVIESCENETRACKS_API FMovieSceneCameraShakeSectionData();
};

