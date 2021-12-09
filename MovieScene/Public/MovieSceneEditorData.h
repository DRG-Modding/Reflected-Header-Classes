#pragma once
#include "CoreMinimal.h"
#include "MovieSceneExpansionState.h"
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
#include "MovieSceneEditorData.generated.h"

USTRUCT()
struct FMovieSceneEditorData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FString, FMovieSceneExpansionState> ExpansionStates;
    
    UPROPERTY()
    TArray<FString> PinnedNodes;
    
    UPROPERTY()
    double ViewStart;
    
    UPROPERTY()
    double ViewEnd;
    
    UPROPERTY()
    double WorkStart;
    
    UPROPERTY()
    double WorkEnd;
    
    UPROPERTY()
    TSet<FFrameNumber> MarkedFrames;
    
    UPROPERTY()
    FFloatRange WorkingRange;
    
    UPROPERTY()
    FFloatRange ViewRange;
    
    MOVIESCENE_API FMovieSceneEditorData();
};

