#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemUpgrade.h"
#include "AddComponentUpgrade.generated.h"

class AItem;
class UActorComponent;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class UAddComponentUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UActorComponent> ComponentClass;
    
    UPROPERTY(EditAnywhere)
    bool ServerOnly;
    
public:
    UFUNCTION(BlueprintPure)
    static bool GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, TSubclassOf<UActorComponent> NewComponentClass, bool includePreview);
    
    UAddComponentUpgrade();
};

