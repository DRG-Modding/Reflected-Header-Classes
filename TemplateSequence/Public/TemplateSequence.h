#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSequence
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "TemplateSequence.generated.h"

class UMovieScene;
class AActor;

UCLASS()
class TEMPLATESEQUENCE_API UTemplateSequence : public UMovieSceneSequence {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UMovieScene* MovieScene;
    
    UPROPERTY()
    TSoftClassPtr<AActor> BoundActorClass;
    
    UPROPERTY()
    TSoftObjectPtr<AActor> BoundPreviewActor;
    
    UPROPERTY()
    TMap<FGuid, FName> BoundActorComponents;
    
    UTemplateSequence();
};

