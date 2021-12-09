#pragma once
#include "CoreMinimal.h"
#include "SavableDataAsset.h"
#include "ESchematicType.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "SchematicCategory.generated.h"

class UEventRewardType;
class UDialogDataAsset;
class UTexture2D;

UCLASS()
class USchematicCategory : public USavableDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText CategoryName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> FrameTexture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor FrameTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor BackgroundTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESchematicType SchematicType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UDialogDataAsset> ShoutForging;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UEventRewardType* RewardType;
    
    USchematicCategory();
};

