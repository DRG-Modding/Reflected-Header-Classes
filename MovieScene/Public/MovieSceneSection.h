#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSignedObject.h"
#include "MovieSceneSectionEvalOptions.h"
#include "EMovieSceneCompletionMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneEasingSettings.h"
#include "EMovieSceneBlendType.h"
#include "MovieSceneFrameRange.h"
#include "OptionalMovieSceneBlendType.h"
#include "MovieSceneSection.generated.h"

UCLASS(Abstract, BlueprintType, DefaultToInstanced, MinimalAPI)
class UMovieSceneSection : public UMovieSceneSignedObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneSectionEvalOptions EvalOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEasingSettings Easing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFrameRange SectionRange;
    
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber PreRollFrames;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber PostRollFrames;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 RowIndex;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 OverlapPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsActive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsLocked: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float EndTime;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float PrerollTime;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float PostrollTime;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 bIsInfinite: 1;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bSupportsInfiniteRange;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOptionalMovieSceneBlendType BlendType;
    
public:
    UMovieSceneSection();
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRowIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPreRollFrames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPostRollFrames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOverlapPriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMovieSceneCompletionMode GetCompletionMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOptionalMovieSceneBlendType GetBlendType() const;
    
};

