#pragma once
#include "CoreMinimal.h"
#include "MovieSceneVectorKeyStructBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MovieSceneVectorKeyStruct.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneVectorKeyStruct : public FMovieSceneVectorKeyStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Vector;
    
    MOVIESCENETRACKS_API FMovieSceneVectorKeyStruct();
};

