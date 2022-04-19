#pragma once
#include "CoreMinimal.h"
#include "MovieSceneVectorKeyStructBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "MovieSceneVector2DKeyStruct.generated.h"

USTRUCT()
struct FMovieSceneVector2DKeyStruct : public FMovieSceneVectorKeyStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Vector;
    
    MOVIESCENETRACKS_API FMovieSceneVector2DKeyStruct();
};

