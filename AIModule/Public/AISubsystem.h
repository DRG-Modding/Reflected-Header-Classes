#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AISubsystem.generated.h"

class UAISystem;

UCLASS(DefaultConfig)
class AIMODULE_API UAISubsystem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UAISystem* AISystem;
    
public:
    UAISubsystem();
};

