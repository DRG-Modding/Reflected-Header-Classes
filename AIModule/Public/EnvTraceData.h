#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine ECollisionChannel
//CROSS-MODULE INCLUDE: Engine ETraceTypeQuery
#include "EEnvQueryTrace.h"
#include "EEnvTraceShape.h"
#include "EnvTraceData.generated.h"

class UNavigationQueryFilter;

USTRUCT(BlueprintType)
struct AIMODULE_API FEnvTraceData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 VersionNum;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UNavigationQueryFilter> NavigationFilter;
    
    UPROPERTY(EditDefaultsOnly)
    float ProjectDown;
    
    UPROPERTY(EditDefaultsOnly)
    float ProjectUp;
    
    UPROPERTY(EditDefaultsOnly)
    float ExtentX;
    
    UPROPERTY(EditDefaultsOnly)
    float ExtentY;
    
    UPROPERTY(EditDefaultsOnly)
    float ExtentZ;
    
    UPROPERTY(EditDefaultsOnly)
    float PostProjectionVerticalOffset;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETraceTypeQuery> TraceChannel;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ECollisionChannel> SerializedChannel;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEnvTraceShape::Type> TraceShape;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEnvQueryTrace::Type> TraceMode;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    uint8 bTraceComplex: 1;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    uint8 bOnlyBlockingHits: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bCanTraceOnNavMesh: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bCanTraceOnGeometry: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bCanDisableTrace: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bCanProjectDown: 1;
    
    FEnvTraceData();
};

