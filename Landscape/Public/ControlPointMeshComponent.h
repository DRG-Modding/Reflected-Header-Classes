#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "ControlPointMeshComponent.generated.h"

UCLASS(EditInlineNew, MinimalAPI, meta=(BlueprintSpawnableComponent))
class UControlPointMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float VirtualTextureMainPassMaxDrawDistance;
    
    UControlPointMeshComponent();
};

