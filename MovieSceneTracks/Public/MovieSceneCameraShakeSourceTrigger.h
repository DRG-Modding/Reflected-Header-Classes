#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECameraShakePlaySpace -FallbackName=ECameraShakePlaySpace
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "MovieSceneCameraShakeSourceTrigger.generated.h"

class UCameraShakeBase;

USTRUCT(BlueprintType)
struct FMovieSceneCameraShakeSourceTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> ShakeClass;
    
    UPROPERTY(EditAnywhere)
    float PlayScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraShakePlaySpace PlaySpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator UserDefinedPlaySpace;
    
    MOVIESCENETRACKS_API FMovieSceneCameraShakeSourceTrigger();
};

