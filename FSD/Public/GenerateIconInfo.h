#pragma once
#include "CoreMinimal.h"
#include "EPickaxePartLocation.h"
#include "PickaxeSet.h"
#include "EGeneratorIconType.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "GenerateIconInfo.generated.h"

class UVanityItem;
class UPickaxePart;
class UItemSkin;
class UPlayerCharacterID;

USTRUCT(BlueprintType)
struct FGenerateIconInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    EGeneratorIconType IconType;
    
    UPROPERTY(Transient)
    UPickaxePart* PickaxePart;
    
    UPROPERTY(Transient)
    FPickaxeSet PickaxeSet;
    
    UPROPERTY(Transient)
    EPickaxePartLocation PickaxePartLocation;
    
    UPROPERTY(Transient)
    UItemSkin* ItemSkin;
    
    UPROPERTY(Transient)
    UVanityItem* Item;
    
    UPROPERTY(Transient)
    UPlayerCharacterID* Character;
    
    UPROPERTY(Transient)
    FVector2D Size;
    
    UPROPERTY(Transient)
    bool bShowCloseUp;
    
    FSD_API FGenerateIconInfo();
};

