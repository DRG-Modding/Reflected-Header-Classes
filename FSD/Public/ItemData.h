#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine PrimaryDataAsset
#include "CraftingCost.h"
#include "ItemData.generated.h"

class UItemID;
class UTexture2D;
class AActor;
class UResourceData;

UCLASS(BlueprintType)
class FSD_API UItemData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UItemID* ItemID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* IconLine;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* IconBG;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* IconDetailed;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> PreviewImage;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> PreviewActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Category;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CreditCost;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<UResourceData*, float> ResourceCost;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 RequiredCharacterLevel;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<AActor> GetPreviewActorClass() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FCraftingCost> GetCraftingCost() const;
    
    UItemData();
};
