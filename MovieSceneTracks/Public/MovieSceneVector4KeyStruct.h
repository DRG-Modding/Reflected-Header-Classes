#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector4
#include "MovieSceneVectorKeyStructBase.h"
#include "MovieSceneVector4KeyStruct.generated.h"

USTRUCT()
struct FMovieSceneVector4KeyStruct : public FMovieSceneVectorKeyStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector4 Vector;
    
    MOVIESCENETRACKS_API FMovieSceneVector4KeyStruct();
};

