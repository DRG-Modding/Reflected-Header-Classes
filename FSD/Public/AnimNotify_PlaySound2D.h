#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "AnimNotify_PlaySound2D.generated.h"

class USoundBase;

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UAnimNotify_PlaySound2D : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound;
    
    UPROPERTY(EditAnywhere)
    float VolumeMultiplier;
    
    UPROPERTY(EditAnywhere)
    float PitchMultiplier;
    
    UAnimNotify_PlaySound2D();
};

