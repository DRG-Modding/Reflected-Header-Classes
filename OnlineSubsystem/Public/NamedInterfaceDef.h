#pragma once
#include "CoreMinimal.h"
#include "NamedInterfaceDef.generated.h"

USTRUCT(BlueprintType)
struct FNamedInterfaceDef {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName InterfaceName;
    
    UPROPERTY()
    FString InterfaceClassName;
    
    ONLINESUBSYSTEM_API FNamedInterfaceDef();
};

