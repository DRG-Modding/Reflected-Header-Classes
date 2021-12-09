#pragma once
#include "CoreMinimal.h"
#include "MovieSceneVectorKeyStructBase.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "MovieSceneVectorKeyStruct.generated.h"

USTRUCT()
struct FMovieSceneVectorKeyStruct : public FMovieSceneVectorKeyStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Vector;
    
    MOVIESCENETRACKS_API FMovieSceneVectorKeyStruct();
};

