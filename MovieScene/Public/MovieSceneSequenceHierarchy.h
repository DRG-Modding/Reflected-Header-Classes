#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequenceHierarchyNode.h"
#include "MovieSceneSubSequenceTree.h"
#include "MovieSceneSequenceID.h"
#include "MovieSceneSubSequenceData.h"
#include "MovieSceneSequenceHierarchy.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSequenceHierarchy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneSequenceHierarchyNode RootNode;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneSubSequenceTree Tree;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData> SubSequences;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode> Hierarchy;
    
public:
    MOVIESCENE_API FMovieSceneSequenceHierarchy();
};

