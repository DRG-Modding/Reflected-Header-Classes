#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DirectoryPath -FallbackName=DirectoryPath
#include "MovieSceneSection.h"
#include "MovieSceneSectionParameters.h"
#include "MovieSceneSubSection.generated.h"

class UMovieSceneSequence;
class AActor;

UCLASS(Config=EditorPerProjectUserSettings)
class MOVIESCENE_API UMovieSceneSubSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneSectionParameters Parameters;
    
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float StartOffset;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float TimeScale;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float PrerollTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NetworkMask;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieSceneSequence* SubSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TLazyObjectPtr<AActor> ActorToRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetSequenceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath TargetPathToRecordTo;
    
public:
    UMovieSceneSubSection();
    UFUNCTION(BlueprintCallable)
    void SetSequence(UMovieSceneSequence* Sequence);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMovieSceneSequence* GetSequence() const;
    
};

