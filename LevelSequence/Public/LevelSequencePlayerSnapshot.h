#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject QualifiedFrameTime
#include "LevelSequenceSnapshotSettings.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSequenceID
#include "LevelSequencePlayerSnapshot.generated.h"

class ULevelSequence;
class UCameraComponent;

USTRUCT(BlueprintType)
struct FLevelSequencePlayerSnapshot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString MasterName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FQualifiedFrameTime MasterTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FQualifiedFrameTime SourceTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString CurrentShotName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FQualifiedFrameTime CurrentShotLocalTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FQualifiedFrameTime CurrentShotSourceTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString SourceTimecode;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TSoftObjectPtr<UCameraComponent> CameraComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FLevelSequenceSnapshotSettings Settings;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ULevelSequence* ActiveShot;
    
    UPROPERTY()
    FMovieSceneSequenceID ShotID;
    
    LEVELSEQUENCE_API FLevelSequencePlayerSnapshot();
};

