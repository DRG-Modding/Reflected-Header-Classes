#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "LandscapeMeshProxyComponent.generated.h"

UCLASS(EditInlineNew, MinimalAPI, meta=(BlueprintSpawnableComponent))
class ULandscapeMeshProxyComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid LandscapeGuid;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FIntPoint> ProxyComponentBases;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int8 ProxyLOD;
    
public:
    ULandscapeMeshProxyComponent();
};

