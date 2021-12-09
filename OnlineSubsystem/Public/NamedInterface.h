#pragma once
#include "CoreMinimal.h"
#include "NamedInterface.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FNamedInterface {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName InterfaceName;
    
    UPROPERTY()
    UObject* InterfaceObject;
    
    ONLINESUBSYSTEM_API FNamedInterface();
};

