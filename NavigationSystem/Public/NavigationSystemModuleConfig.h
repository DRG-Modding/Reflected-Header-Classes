#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine NavigationSystemConfig
#include "NavigationSystemModuleConfig.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class NAVIGATIONSYSTEM_API UNavigationSystemModuleConfig : public UNavigationSystemConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    uint8 bStrictlyStatic: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCreateOnClient: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAutoSpawnMissingNavData: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSpawnNavDataInNavBoundsLevel: 1;
    
public:
    UNavigationSystemModuleConfig();
};

