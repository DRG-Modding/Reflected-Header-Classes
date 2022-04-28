#pragma once
#include "CoreMinimal.h"
#include "MovieSceneObjectBindingID.h"
#include "MovieSceneBindingOverrideData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FMovieSceneBindingOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneObjectBindingID ObjectBindingId;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UObject> Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverridesDefault;
    
    MOVIESCENE_API FMovieSceneBindingOverrideData();
};

