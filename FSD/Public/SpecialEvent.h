#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SpecialEvent.generated.h"

class USpecialEventSpawner;

UCLASS(Blueprintable)
class USpecialEvent : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Weight;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpecialEventSpawner* EventSpawner;
    
public:
    USpecialEvent();
};

