#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "MoviePlayerSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class MOVIEPLAYER_API UMoviePlayerSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bWaitForMoviesToComplete;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bMoviesAreSkippable;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    TArray<FString> StartupMovies;
    
    UMoviePlayerSettings();
};

