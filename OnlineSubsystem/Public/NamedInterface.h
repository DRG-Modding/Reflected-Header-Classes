#pragma once
#include "CoreMinimal.h"
#include "NamedInterface.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FNamedInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName InterfaceName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UObject* InterfaceObject;
    
    ONLINESUBSYSTEM_API FNamedInterface();
};

