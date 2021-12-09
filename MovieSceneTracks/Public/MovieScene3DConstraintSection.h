#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSection
//CROSS-MODULE INCLUDE: CoreUObject Guid
//CROSS-MODULE INCLUDE: MovieScene MovieSceneObjectBindingID
#include "MovieScene3DConstraintSection.generated.h"

UCLASS(MinimalAPI)
class UMovieScene3DConstraintSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FGuid ConstraintId;
    
    UPROPERTY(EditAnywhere)
    FMovieSceneObjectBindingID ConstraintBindingID;
    
public:
    UFUNCTION(BlueprintPure)
    void SetConstraintBindingID(const FMovieSceneObjectBindingID& InConstraintBindingID);
    
    UFUNCTION(BlueprintPure)
    FMovieSceneObjectBindingID GetConstraintBindingID() const;
    
    UMovieScene3DConstraintSection();
};

