#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSection
#include "ELevelVisibility.h"
#include "MovieSceneLevelVisibilitySection.generated.h"

UCLASS()
class MOVIESCENETRACKS_API UMovieSceneLevelVisibilitySection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    ELevelVisibility Visibility;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> LevelNames;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVisibility(ELevelVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetLevelNames(const TArray<FName>& InLevelNames);
    
    UFUNCTION(BlueprintPure)
    ELevelVisibility GetVisibility() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetLevelNames() const;
    
    UMovieSceneLevelVisibilitySection();
};

