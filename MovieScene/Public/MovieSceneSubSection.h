#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "MovieSceneSectionParameters.h"
//CROSS-MODULE INCLUDE: Engine DirectoryPath
#include "MovieSceneSubSection.generated.h"

class AActor;
class UMovieSceneSequence;

UCLASS()
class MOVIESCENE_API UMovieSceneSubSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMovieSceneSectionParameters Parameters;
    
private:
    UPROPERTY()
    float StartOffset;
    
    UPROPERTY()
    float TimeScale;
    
    UPROPERTY()
    float PrerollTime;
    
protected:
    UPROPERTY(EditAnywhere)
    UMovieSceneSequence* SubSequence;
    
    UPROPERTY(EditAnywhere)
    TLazyObjectPtr<AActor> ActorToRecord;
    
    UPROPERTY(EditAnywhere)
    FString TargetSequenceName;
    
    UPROPERTY(EditAnywhere)
    FDirectoryPath TargetPathToRecordTo;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSequence(UMovieSceneSequence* Sequence);
    
    UFUNCTION(BlueprintPure)
    UMovieSceneSequence* GetSequence() const;
    
    UMovieSceneSubSection();
};

