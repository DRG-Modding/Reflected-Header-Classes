#pragma once
#include "CoreMinimal.h"
#include "MovieSceneBindingOverrideData.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "MovieSceneBindingOverrides.generated.h"

UCLASS(DefaultToInstanced, EditInlineNew)
class MOVIESCENE_API UMovieSceneBindingOverrides : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FMovieSceneBindingOverrideData> BindingData;
    
public:
    UMovieSceneBindingOverrides();
};

