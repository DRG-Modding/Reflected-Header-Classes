#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "ENavSystemOverridePolicy.h"
#include "NavSystemConfigOverride.generated.h"

class UNavigationSystemConfig;

UCLASS()
class NAVIGATIONSYSTEM_API ANavSystemConfigOverride : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UNavigationSystemConfig* NavigationSystemConfig;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ENavSystemOverridePolicy OverridePolicy;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    uint8 bLoadOnClient: 1;
    
public:
    ANavSystemConfigOverride();
};

