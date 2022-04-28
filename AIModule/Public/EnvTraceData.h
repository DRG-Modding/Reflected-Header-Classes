#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETraceTypeQuery -FallbackName=ETraceTypeQuery
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "EEnvQueryTrace.h"
#include "EEnvTraceShape.h"
#include "EnvTraceData.generated.h"

class UNavigationQueryFilter;

USTRUCT(BlueprintType)
struct AIMODULE_API FEnvTraceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VersionNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> NavigationFilter;
    
    UPROPERTY(EditAnywhere)
    float ProjectDown;
    
    UPROPERTY(EditAnywhere)
    float ProjectUp;
    
    UPROPERTY(EditAnywhere)
    float ExtentX;
    
    UPROPERTY(EditAnywhere)
    float ExtentY;
    
    UPROPERTY(EditAnywhere)
    float ExtentZ;
    
    UPROPERTY(EditAnywhere)
    float PostProjectionVerticalOffset;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETraceTypeQuery> TraceChannel;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> SerializedChannel;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEnvTraceShape::Type> TraceShape;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEnvQueryTrace::Type> TraceMode;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTraceComplex: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOnlyBlockingHits: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanTraceOnNavMesh: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanTraceOnGeometry: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanDisableTrace: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanProjectDown: 1;
    
    FEnvTraceData();
};

