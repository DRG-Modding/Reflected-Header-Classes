#pragma once
#include "CoreMinimal.h"
#include "NiagaraRendererProperties.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "NiagaraVariableAttributeBinding.h"
#include "NiagaraLightRendererProperties.generated.h"

UCLASS(EditInlineNew)
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bUseInverseSquaredFalloff: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAffectsTranslucency: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideRenderingEnabled: 1;
    
    UPROPERTY(EditAnywhere)
    float RadiusScale;
    
    UPROPERTY(EditAnywhere)
    FVector ColorAdd;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding LightRenderingEnabledBinding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding LightExponentBinding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding PositionBinding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding ColorBinding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding RadiusBinding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding VolumetricScatteringBinding;
    
    UNiagaraLightRendererProperties();
};

