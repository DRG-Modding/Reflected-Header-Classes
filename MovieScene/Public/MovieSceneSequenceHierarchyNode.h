#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequenceID.h"
#include "MovieSceneSequenceHierarchyNode.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSequenceHierarchyNode {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneSequenceID ParentID;
    
    UPROPERTY()
    TArray<FMovieSceneSequenceID> Children;
    
    MOVIESCENE_API FMovieSceneSequenceHierarchyNode();
};

