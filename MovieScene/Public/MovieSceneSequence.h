#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSignedObject.h"
#include "EMovieSceneSequenceFlags.h"
#include "EMovieSceneCompletionMode.h"
#include "MovieSceneObjectBindingID.h"
#include "MovieSceneSequence.generated.h"

class UMovieSceneCompiledData;

UCLASS(Abstract, BlueprintType, MinimalAPI)
class UMovieSceneSequence : public UMovieSceneSignedObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneCompiledData* CompiledData;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    EMovieSceneCompletionMode DefaultCompletionMode;
    
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bParentContextsAreSignificant;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bPlayableDirectly;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EMovieSceneSequenceFlags SequenceFlags;
    
public:
    UMovieSceneSequence();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMovieSceneObjectBindingID> FindBindingsByTag(FName InBindingName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMovieSceneObjectBindingID FindBindingByTag(FName InBindingName) const;
    
};

