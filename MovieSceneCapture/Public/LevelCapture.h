#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCapture.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "LevelCapture.generated.h"

UCLASS(Blueprintable)
class MOVIESCENECAPTURE_API ULevelCapture : public UMovieSceneCapture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoStartCapture;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PrerequisiteActorId;
    
public:
    ULevelCapture();
};

