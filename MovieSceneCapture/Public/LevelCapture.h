#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCapture.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "LevelCapture.generated.h"

UCLASS()
class MOVIESCENECAPTURE_API ULevelCapture : public UMovieSceneCapture {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bAutoStartCapture;
    
private:
    UPROPERTY()
    FGuid PrerequisiteActorId;
    
public:
    ULevelCapture();
};

