#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneTrackInstanceInput.h"
#include "MovieSceneTrackInstance.generated.h"

class UMovieSceneEntitySystemLinker;

UCLASS(Transient)
class MOVIESCENE_API UMovieSceneTrackInstance : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UObject* AnimatedObject;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bIsMasterTrackInstance;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UMovieSceneEntitySystemLinker* Linker;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneTrackInstanceInput> Inputs;
    
public:
    UMovieSceneTrackInstance();
};

