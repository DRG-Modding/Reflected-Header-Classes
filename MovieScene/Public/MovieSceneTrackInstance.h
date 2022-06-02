#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrackInstanceInput.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneTrackInstance.generated.h"

class UMovieSceneEntitySystemLinker;

UCLASS(Blueprintable, Transient)
class MOVIESCENE_API UMovieSceneTrackInstance : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* AnimatedObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMasterTrackInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieSceneEntitySystemLinker* Linker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneTrackInstanceInput> Inputs;
    
public:
    UMovieSceneTrackInstance();
};

