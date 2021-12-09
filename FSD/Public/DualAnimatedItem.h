#pragma once
#include "CoreMinimal.h"
#include "Item.h"
#include "DualAnimatedItem.generated.h"

class UAnimInstance;
class UAnimMontage;
class UPlayerAnimInstance;
class USkeletalMeshComponent;
class UItemCharacterAnimationSet;

UCLASS(Abstract)
class ADualAnimatedItem : public AItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimInstance* FPAnimInstance;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPlayerAnimInstance* TPAnimInstance;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* FPRMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* FPLMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* TPRMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* TPLMesh;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* FP_EquipAnimation;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* TP_EquipAnimation;
    
    UPROPERTY(EditAnywhere)
    float EquipDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UItemCharacterAnimationSet* CharacterAnimationSet;
    
    UFUNCTION(BlueprintPure)
    USkeletalMeshComponent* GetRItemMesh() const;
    
    UFUNCTION(BlueprintPure)
    USkeletalMeshComponent* GetLItemMesh() const;
    
public:
    ADualAnimatedItem();
};

