#pragma once
#include "CoreMinimal.h"
#include "MovieSceneBindingOverrideData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneBindingOverrides.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class MOVIESCENE_API UMovieSceneBindingOverrides : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneBindingOverrideData> BindingData;
    
public:
    UMovieSceneBindingOverrides();
};

