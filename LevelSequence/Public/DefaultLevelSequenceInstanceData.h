#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject Transform
//CROSS-MODULE INCLUDE: MovieSceneTracks MovieSceneTransformOrigin
#include "DefaultLevelSequenceInstanceData.generated.h"

class AActor;

UCLASS(BlueprintType)
class LEVELSEQUENCE_API UDefaultLevelSequenceInstanceData : public UObject, public IMovieSceneTransformOrigin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* TransformOriginActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform TransformOrigin;
    
    UDefaultLevelSequenceInstanceData();
};

