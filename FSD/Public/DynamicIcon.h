#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DynamicIcon.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class FSD_API UDynamicIcon : public UObject {
    GENERATED_BODY()
public:
    UDynamicIcon();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetIconMaterial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstanceDynamic* GenerateIconMaterial(UObject* materialOwner) const;
    
};

