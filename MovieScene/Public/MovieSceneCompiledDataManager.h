#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneSequenceHierarchy.h"
#include "MovieSceneEvaluationTemplate.h"
#include "MovieSceneEvaluationField.h"
#include "MovieSceneEntityComponentField.h"
#include "MovieSceneCompiledDataManager.generated.h"

UCLASS()
class MOVIESCENE_API UMovieSceneCompiledDataManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<int32, FMovieSceneSequenceHierarchy> Hierarchies;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<int32, FMovieSceneEvaluationTemplate> TrackTemplates;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<int32, FMovieSceneEvaluationField> TrackTemplateFields;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<int32, FMovieSceneEntityComponentField> EntityComponentFields;
    
public:
    UMovieSceneCompiledDataManager();
};

