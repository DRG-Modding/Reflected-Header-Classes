#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSubSection
#include "MovieSceneCinematicShotSection.generated.h"

UCLASS()
class MOVIESCENETRACKS_API UMovieSceneCinematicShotSection : public UMovieSceneSubSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FString ShotDisplayName;
    
    UPROPERTY()
    FText DisplayName;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetShotDisplayName(const FString& InShotDisplayName);
    
    UFUNCTION(BlueprintPure)
    FString GetShotDisplayName() const;
    
    UMovieSceneCinematicShotSection();
};

