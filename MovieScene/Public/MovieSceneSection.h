#pragma once
#include "CoreMinimal.h"
#include "OptionalMovieSceneBlendType.h"
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
#include "MovieSceneSignedObject.h"
#include "EMovieSceneBlendType.h"
#include "MovieSceneFrameRange.h"
#include "MovieSceneEasingSettings.h"
#include "MovieSceneSectionEvalOptions.h"
#include "EMovieSceneCompletionMode.h"
#include "MovieSceneSection.generated.h"

UCLASS(Abstract, BlueprintType, DefaultToInstanced, MinimalAPI)
class UMovieSceneSection : public UMovieSceneSignedObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMovieSceneSectionEvalOptions EvalOptions;
    
    UPROPERTY(EditAnywhere)
    FMovieSceneEasingSettings Easing;
    
    UPROPERTY(EditAnywhere)
    FMovieSceneFrameRange SectionRange;
    
private:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FFrameNumber PreRollFrames;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FFrameNumber PostRollFrames;
    
    UPROPERTY()
    int32 RowIndex;
    
    UPROPERTY()
    int32 OverlapPriority;
    
    UPROPERTY(EditAnywhere)
    uint8 bIsActive: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIsLocked: 1;
    
protected:
    UPROPERTY()
    float StartTime;
    
    UPROPERTY()
    float EndTime;
    
    UPROPERTY()
    float PrerollTime;
    
    UPROPERTY()
    float PostrollTime;
    
    UPROPERTY()
    uint8 bIsInfinite: 1;
    
    UPROPERTY()
    bool bSupportsInfiniteRange;
    
    UPROPERTY()
    FOptionalMovieSceneBlendType BlendType;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetRowIndex(int32 NewRowIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetPreRollFrames(int32 InPreRollFrames);
    
    UFUNCTION(BlueprintCallable)
    void SetPostRollFrames(int32 InPostRollFrames);
    
    UFUNCTION(BlueprintCallable)
    void SetOverlapPriority(int32 NewPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetIsLocked(bool bInIsLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetIsActive(bool bInIsActive);
    
    UFUNCTION(BlueprintCallable)
    void SetCompletionMode(EMovieSceneCompletionMode InCompletionMode);
    
    UFUNCTION(BlueprintCallable)
    void SetBlendType(EMovieSceneBlendType InBlendType);
    
    UFUNCTION(BlueprintPure)
    bool IsLocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRowIndex() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPreRollFrames() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPostRollFrames() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetOverlapPriority() const;
    
    UFUNCTION(BlueprintPure)
    EMovieSceneCompletionMode GetCompletionMode() const;
    
    UFUNCTION(BlueprintPure)
    FOptionalMovieSceneBlendType GetBlendType() const;
    
    UMovieSceneSection();
};

