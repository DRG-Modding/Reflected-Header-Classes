#pragma once
#include "CoreMinimal.h"
#include "ENiagaraSortMode.h"
#include "NiagaraRendererProperties.h"
#include "NiagaraUserParameterBinding.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "ENiagaraSpriteAlignment.h"
#include "NiagaraVariableAttributeBinding.h"
#include "ENiagaraSpriteFacingMode.h"
#include "NiagaraSpriteRendererProperties.generated.h"

class UMaterialInterface;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UMaterialInterface* Material;
    
    UPROPERTY(EditAnywhere)
    FNiagaraUserParameterBinding MaterialUserParamBinding;
    
    UPROPERTY(EditAnywhere)
    ENiagaraSpriteAlignment Alignment;
    
    UPROPERTY(EditAnywhere)
    ENiagaraSpriteFacingMode FacingMode;
    
    UPROPERTY(EditAnywhere)
    FVector2D PivotInUVSpace;
    
    UPROPERTY(EditAnywhere)
    ENiagaraSortMode SortMode;
    
    UPROPERTY(EditAnywhere)
    FVector2D SubImageSize;
    
    UPROPERTY(EditAnywhere)
    uint8 bSubImageBlend: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bRemoveHMDRollInVR: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSortOnlyWhenTranslucent: 1;
    
    UPROPERTY(EditAnywhere)
    float MinFacingCameraBlendDistance;
    
    UPROPERTY(EditAnywhere)
    float MaxFacingCameraBlendDistance;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding PositionBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding ColorBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding VelocityBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding SpriteRotationBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding SpriteSizeBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding SpriteFacingBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding SpriteAlignmentBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding SubImageIndexBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding DynamicMaterialBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding DynamicMaterial1Binding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding DynamicMaterial2Binding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding DynamicMaterial3Binding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding CameraOffsetBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding UVScaleBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding MaterialRandomBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding CustomSortingBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding NormalizedAgeBinding;
    
    UNiagaraSpriteRendererProperties();
};

