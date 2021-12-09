#pragma once
#include "CoreMinimal.h"
#include "VanityItem.h"
#include "EyeBrowsVanityItem.generated.h"

class UVanityAnimInstance;
class USkeletalMesh;

UCLASS(EditInlineNew)
class UEyeBrowsVanityItem : public UVanityItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USkeletalMesh> Mesh;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UVanityAnimInstance> AnimInstance;
    
public:
    UEyeBrowsVanityItem();
};

