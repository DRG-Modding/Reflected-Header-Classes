#pragma once
#include "CoreMinimal.h"
#include "Item.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "AnimatedItem.generated.h"

class UItemCharacterAnimationSet;
class USkinnableComponent;
class UAnimMontage;
class UPlayerAnimInstance;
class USkeletalMeshComponent;

UCLASS(Abstract)
class AAnimatedItem : public AItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, Export, VisibleAnywhere)
    USkinnableComponent* Skinnable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPlayerAnimInstance* FPAnimInstance;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPlayerAnimInstance* TPAnimInstance;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* FPMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* TPMesh;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* FP_EquipAnimation;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* TP_EquipAnimation;
    
    UPROPERTY(EditAnywhere)
    float EquipDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UItemCharacterAnimationSet* CharacterAnimationSet;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnReceiveEquippedFinished();
    
    UFUNCTION(BlueprintPure)
    FTransform GetMuzzle() const;
    
    UFUNCTION(BlueprintPure)
    USkeletalMeshComponent* GetItemMesh() const;
    
public:
    AAnimatedItem();
};

