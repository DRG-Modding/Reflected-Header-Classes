#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshComponent -FallbackName=MeshComponent
#include "GeometryCacheComponent.generated.h"

class UGeometryCache;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEOMETRYCACHE_API UGeometryCacheComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGeometryCache* GeometryCache;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bLooping;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExtrapolateFrames;
    
    UPROPERTY(EditAnywhere, Interp)
    float StartTimeOffset;
    
    UPROPERTY(EditAnywhere, Interp)
    float PlaybackSpeed;
    
    UPROPERTY(EditAnywhere)
    float MotionVectorScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumTracks;
    
    UPROPERTY(EditAnywhere, Transient)
    float ElapsedTime;
    
    UPROPERTY(EditAnywhere)
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bManualTick;
    
public:
    UGeometryCacheComponent();
    UFUNCTION(BlueprintCallable)
    void TickAtThisTime(const float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetStartTimeOffset(const float NewStartTimeOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaybackSpeed(const float NewPlaybackSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetMotionVectorScale(const float NewMotionVectorScale);
    
    UFUNCTION(BlueprintCallable)
    void SetLooping(const bool bNewLooping);
    
    UFUNCTION(BlueprintCallable)
    bool SetGeometryCache(UGeometryCache* NewGeomCache);
    
    UFUNCTION(BlueprintCallable)
    void SetExtrapolateFrames(const bool bNewExtrapolating);
    
    UFUNCTION(BlueprintCallable)
    void PlayReversedFromEnd();
    
    UFUNCTION(BlueprintCallable)
    void PlayReversed();
    
    UFUNCTION(BlueprintCallable)
    void PlayFromStart();
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingReversed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLooping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExtrapolatingFrames() const;
    
    UFUNCTION(BlueprintPure)
    float GetStartTimeOffset() const;
    
    UFUNCTION(BlueprintPure)
    float GetPlaybackSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetPlaybackDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfFrames() const;
    
    UFUNCTION(BlueprintPure)
    float GetMotionVectorScale() const;
    
    UFUNCTION(BlueprintPure)
    float GetDuration() const;
    
    UFUNCTION(BlueprintPure)
    float GetAnimationTime() const;
    
};

