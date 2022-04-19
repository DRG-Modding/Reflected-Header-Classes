#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OculusResourceHolder.generated.h"

class UMaterial;

UCLASS()
class UOculusResourceHolder : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UMaterial* PokeAHoleMaterial;
    
    UOculusResourceHolder();
};

