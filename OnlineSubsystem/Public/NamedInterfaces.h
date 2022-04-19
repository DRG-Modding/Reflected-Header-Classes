#pragma once
#include "CoreMinimal.h"
#include "NamedInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NamedInterfaceDef.h"
#include "NamedInterfaces.generated.h"

UCLASS(Transient)
class UNamedInterfaces : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FNamedInterface> NamedInterfaces;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    TArray<FNamedInterfaceDef> NamedInterfaceDefs;
    
public:
    UNamedInterfaces();
};

