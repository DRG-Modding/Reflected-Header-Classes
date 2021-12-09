#pragma once
#include "CoreMinimal.h"
#include "VanityItem.h"
#include "MoustacheVanityItem.generated.h"

class UVanityAnimInstance;
class USkeletalMesh;

UCLASS(EditInlineNew)
class UMoustacheVanityItem : public UVanityItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USkeletalMesh> Mesh;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UVanityAnimInstance> AnimInstance;
    
    UPROPERTY(EditAnywhere)
    bool RequiresSlimArmor;
    
public:
    UMoustacheVanityItem();
};

