#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: CoreUObject Interface
#include "LoadoutItem.generated.h"

class AItem;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class ULoadoutItem : public UInterface {
    GENERATED_BODY()
};

class ILoadoutItem : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual  return NULL; GetLoadoutItemClass() const PURE_VIRTUAL(GetLoadoutItemClass,);
    
};

