#pragma once
#include "CoreMinimal.h"
#include "NiagaraRendererProperties.h"
#include "ENiagaraRibbonFacingMode.h"
#include "NiagaraUserParameterBinding.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "NiagaraVariableAttributeBinding.h"
#include "ENiagaraRibbonDrawDirection.h"
#include "ENiagaraRibbonAgeOffsetMode.h"
#include "ENiagaraRibbonTessellationMode.h"
#include "NiagaraRibbonRendererProperties.generated.h"

class UMaterialInterface;

UCLASS(EditInlineNew)
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UMaterialInterface* Material;
    
    UPROPERTY(EditAnywhere)
    FNiagaraUserParameterBinding MaterialUserParamBinding;
    
    UPROPERTY(EditAnywhere)
    ENiagaraRibbonFacingMode FacingMode;
    
    UPROPERTY(EditAnywhere)
    float UV0TilingDistance;
    
    UPROPERTY(EditAnywhere)
    FVector2D UV0Scale;
    
    UPROPERTY(EditAnywhere)
    FVector2D UV0Offset;
    
    UPROPERTY(EditAnywhere)
    ENiagaraRibbonAgeOffsetMode UV0AgeOffsetMode;
    
    UPROPERTY(EditAnywhere)
    float UV1TilingDistance;
    
    UPROPERTY(EditAnywhere)
    FVector2D UV1Scale;
    
    UPROPERTY(EditAnywhere)
    FVector2D UV1Offset;
    
    UPROPERTY(EditAnywhere)
    ENiagaraRibbonAgeOffsetMode UV1AgeOffsetMode;
    
    UPROPERTY(EditAnywhere)
    ENiagaraRibbonDrawDirection DrawDirection;
    
    UPROPERTY(EditAnywhere)
    float CurveTension;
    
    UPROPERTY(EditAnywhere)
    ENiagaraRibbonTessellationMode TessellationMode;
    
    UPROPERTY(EditAnywhere)
    int32 TessellationFactor;
    
    UPROPERTY(EditAnywhere)
    bool bUseConstantFactor;
    
    UPROPERTY(EditAnywhere)
    float TessellationAngle;
    
    UPROPERTY(EditAnywhere)
    bool bScreenSpaceTessellation;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding PositionBinding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding ColorBinding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding VelocityBinding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding NormalizedAgeBinding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding RibbonTwistBinding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding RibbonWidthBinding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding RibbonFacingBinding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding RibbonIdBinding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding RibbonLinkOrderBinding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding MaterialRandomBinding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding DynamicMaterialBinding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding DynamicMaterial1Binding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding DynamicMaterial2Binding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FNiagaraVariableAttributeBinding DynamicMaterial3Binding;
    
    UNiagaraRibbonRendererProperties();
};

