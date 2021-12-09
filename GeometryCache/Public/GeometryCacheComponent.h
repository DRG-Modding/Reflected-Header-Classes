#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine MeshComponent
#include "GeometryCacheComponent.generated.h"

class UGeometryCache;

UCLASS()
class GEOMETRYCACHE_API UGeometryCacheComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGeometryCache* GeometryCache;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bLooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float StartTimeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float PlaybackSpeed;
    
    UPROPERTY(VisibleAnywhere)
    int32 NumTracks;
    
    UPROPERTY(Transient, VisibleAnywhere)
    float ElapsedTime;
    
    UPROPERTY(BlueprintReadOnly)
    float Duration;
    
    UPROPERTY(EditAnywhere)
    bool bManualTick;
    
public:
    UFUNCTION(BlueprintCallable)
    void TickAtThisTime(const float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetStartTimeOffset(const float NewStartTimeOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaybackSpeed(const float NewPlaybackSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetLooping(const bool bNewLooping);
    
    UFUNCTION(BlueprintCallable)
    bool SetGeometryCache(UGeometryCache* NewGeomCache);
    
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
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingReversed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLooping() const;
    
    UFUNCTION(BlueprintPure)
    float GetStartTimeOffset() const;
    
    UFUNCTION(BlueprintPure)
    float GetPlaybackSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetPlaybackDirection() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumberOfFrames() const;
    
    UFUNCTION(BlueprintPure)
    float GetDuration() const;
    
    UFUNCTION(BlueprintPure)
    float GetAnimationTime() const;
    
    UGeometryCacheComponent();
};

