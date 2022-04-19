#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneObjectBindingID -FallbackName=MovieSceneObjectBindingID
#include "MovieScene3DConstraintSection.generated.h"

UCLASS(MinimalAPI)
class UMovieScene3DConstraintSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid ConstraintId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneObjectBindingID ConstraintBindingID;
    
public:
    UMovieScene3DConstraintSection();
    UFUNCTION(BlueprintCallable)
    void SetConstraintBindingID(const FMovieSceneObjectBindingID& InConstraintBindingID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMovieSceneObjectBindingID GetConstraintBindingID() const;
    
};

