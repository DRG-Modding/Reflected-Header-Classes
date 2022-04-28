#pragma once
#include "CoreMinimal.h"
#include "MovieSceneVectorKeyStructBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "MovieSceneVector4KeyStruct.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneVector4KeyStruct : public FMovieSceneVectorKeyStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 Vector;
    
    MOVIESCENETRACKS_API FMovieSceneVector4KeyStruct();
};

