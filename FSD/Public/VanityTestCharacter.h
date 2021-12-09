#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Character
#include "EVanitySlot.h"
#include "VanityTestCharacterItem.h"
#include "VanityTestCharacter.generated.h"

class USkeletalMesh;

UCLASS()
class AVanityTestCharacter : public ACharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float ArmorThickness;
    
    UPROPERTY(EditAnywhere)
    float BeardThickness;
    
    UPROPERTY(EditAnywhere)
    bool ArmorCoversBeard;
    
    UPROPERTY(EditAnywhere)
    TMap<EVanitySlot, FVanityTestCharacterItem> vanityItems;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* WeaponMesh;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetupVanity();
    
    AVanityTestCharacter();
};

