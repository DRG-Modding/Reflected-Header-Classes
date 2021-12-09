#pragma once
#include "CoreMinimal.h"
#include "MovieSceneObjectBindingID.h"
#include "MovieSceneBindingOverrideData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FMovieSceneBindingOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMovieSceneObjectBindingID ObjectBindingID;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UObject> Object;
    
    UPROPERTY(EditAnywhere)
    bool bOverridesDefault;
    
    MOVIESCENE_API FMovieSceneBindingOverrideData();
};

