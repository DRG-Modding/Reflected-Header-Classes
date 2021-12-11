#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine NavDataConfig
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: Engine NavigationDataInterface
#include "ERuntimeGenerationType.h"
#include "SupportedAreaData.h"
#include "NavigationData.generated.h"

class UPrimitiveComponent;

UCLASS(Abstract, DefaultConfig)
class NAVIGATIONSYSTEM_API ANavigationData : public AActor, public INavigationDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(DuplicateTransient, Export, Transient)
    UPrimitiveComponent* RenderingComp;
    
protected:
    UPROPERTY()
    FNavDataConfig NavDataConfig;
    
    UPROPERTY(EditAnywhere, Transient)
    uint8 bEnableDrawing: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bForceRebuildOnLoad: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bAutoDestroyWhenNoNavigation: 1;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    uint8 bCanBeMainNavData: 1;
    
    UPROPERTY(AdvancedDisplay, Config, VisibleAnywhere)
    uint8 bCanSpawnOnRebuild: 1;
    
    UPROPERTY(Config)
    uint8 bRebuildAtRuntime: 1;
    
    UPROPERTY(Config, EditAnywhere)
    ERuntimeGenerationType RuntimeGeneration;
    
    UPROPERTY(Config, EditAnywhere)
    float ObservedPathsTickInterval;
    
    UPROPERTY()
    uint32 DataVersion;
    
    UPROPERTY()
    TArray<FSupportedAreaData> SupportedAreas;
    
public:
    ANavigationData();
    
    // Fix for true pure virtual functions not being implemented
};

