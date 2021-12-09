#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNotify
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "AnimNotify_FSDPlayParticleEffect.generated.h"

class UFXSystemAsset;

UCLASS(CollapseCategories)
class UAnimNotify_FSDPlayParticleEffect : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFXSystemAsset* PSTemplate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector LocationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator RotationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AlwaysZUp;
    
    UPROPERTY(EditAnywhere)
    FVector Scale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 Attached: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    bool IsFirstPerson;
    
    UPROPERTY(EditAnywhere)
    bool UseTerainMaterial;
    
    UAnimNotify_FSDPlayParticleEffect();
};

