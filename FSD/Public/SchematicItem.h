#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Color
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "SchematicItem.generated.h"

class UTexture;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class USchematicItem : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    FText GetTitle() const;
    
    UFUNCTION(BlueprintPure)
    FColor GetIconTint() const;
    
    UFUNCTION(BlueprintPure)
    UTexture* GetIcon(UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintPure)
    FText GetDescription() const;
    
    USchematicItem();
};

