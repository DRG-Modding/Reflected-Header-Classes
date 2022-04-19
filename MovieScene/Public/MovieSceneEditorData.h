#pragma once
#include "CoreMinimal.h"
#include "MovieSceneExpansionState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "MovieSceneEditorData.generated.h"

USTRUCT()
struct FMovieSceneEditorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<FString, FMovieSceneExpansionState> ExpansionStates;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FString> PinnedNodes;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    double ViewStart;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    double ViewEnd;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    double WorkStart;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    double WorkEnd;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TSet<FFrameNumber> MarkedFrames;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFloatRange WorkingRange;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFloatRange ViewRange;
    
    MOVIESCENE_API FMovieSceneEditorData();
};

