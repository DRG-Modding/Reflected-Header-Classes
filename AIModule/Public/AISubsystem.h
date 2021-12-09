#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "AISubsystem.generated.h"

class UAISystem;

UCLASS(DefaultConfig)
class AIMODULE_API UAISubsystem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UAISystem* AISystem;
    
public:
    UAISubsystem();
};

