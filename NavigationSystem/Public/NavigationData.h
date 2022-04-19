#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavigationDataInterface -FallbackName=NavigationDataInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavDataConfig -FallbackName=NavDataConfig
#include "ERuntimeGenerationType.h"
#include "SupportedAreaData.h"
#include "NavigationData.generated.h"

class UPrimitiveComponent;

UCLASS(Abstract, DefaultConfig)
class NAVIGATIONSYSTEM_API ANavigationData : public AActor, public INavigationDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, Export, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* RenderingComp;
    
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNavDataConfig NavDataConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bEnableDrawing: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceRebuildOnLoad: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoDestroyWhenNoNavigation: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanBeMainNavData: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanSpawnOnRebuild: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    uint8 bRebuildAtRuntime: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERuntimeGenerationType RuntimeGeneration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObservedPathsTickInterval;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint32 DataVersion;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FSupportedAreaData> SupportedAreas;
    
public:
    ANavigationData();
    
    // Fix for true pure virtual functions not being implemented
};

