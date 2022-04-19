#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequenceID.h"
#include "MovieSceneSequenceHierarchyNode.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSequenceHierarchyNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneSequenceID ParentID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneSequenceID> Children;
    
    MOVIESCENE_API FMovieSceneSequenceHierarchyNode();
};

