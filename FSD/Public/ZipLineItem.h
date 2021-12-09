#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagQuery
#include "ZipLineItem.generated.h"

class UDialogDataAsset;

UCLASS(Abstract)
class AZipLineItem : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagQuery ExcludeSurfaceTags;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool CanFireWeapon(FText& FailMsg, UDialogDataAsset*& FailShout);
    
public:
    AZipLineItem();
};

