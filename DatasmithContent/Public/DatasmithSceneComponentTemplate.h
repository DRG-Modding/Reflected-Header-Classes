#pragma once
#include "CoreMinimal.h"
#include "DatasmithObjectTemplate.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
//CROSS-MODULE INCLUDE: Engine EComponentMobility
#include "DatasmithSceneComponentTemplate.generated.h"

class USceneComponent;

UCLASS()
class DATASMITHCONTENT_API UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform RelativeTransform;
    
    UPROPERTY()
    TEnumAsByte<EComponentMobility::Type> Mobility;
    
    UPROPERTY(Export)
    TSoftObjectPtr<USceneComponent> AttachParent;
    
    UPROPERTY()
    TSet<FName> Tags;
    
    UDatasmithSceneComponentTemplate();
};

