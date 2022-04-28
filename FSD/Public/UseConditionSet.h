#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "UseConditionSet.generated.h"

class UUseConditionBase;

UCLASS(Blueprintable)
class UUseConditionSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UUseConditionBase*> Conditions;
    
    UUseConditionSet();
};

