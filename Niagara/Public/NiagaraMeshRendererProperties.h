#pragma once
#include "CoreMinimal.h"
#include "NiagaraRendererProperties.h"
#include "ENiagaraSortMode.h"
#include "ENiagaraMeshLockedAxisSpace.h"
#include "ENiagaraMeshFacingMode.h"
#include "NiagaraMeshMaterialOverride.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "NiagaraVariableAttributeBinding.h"
#include "NiagaraMeshRendererProperties.generated.h"

class UStaticMesh;

UCLASS(EditInlineNew)
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UStaticMesh* ParticleMesh;
    
    UPROPERTY(EditAnywhere)
    ENiagaraSortMode SortMode;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideMaterials: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSortOnlyWhenTranslucent: 1;
    
    UPROPERTY(EditAnywhere)
    TArray<FNiagaraMeshMaterialOverride> OverrideMaterials;
    
    UPROPERTY(EditAnywhere)
    FVector2D SubImageSize;
    
    UPROPERTY(EditAnywhere)
    uint8 bSubImageBlend: 1;
    
    UPROPERTY(EditAnywhere)
    ENiagaraMeshFacingMode FacingMode;
    
    UPROPERTY(EditAnywhere)
    uint8 bLockedAxisEnable: 1;
    
    UPROPERTY(EditAnywhere)
    FVector LockedAxis;
    
    UPROPERTY(EditAnywhere)
    ENiagaraMeshLockedAxisSpace LockedAxisSpace;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding PositionBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding ColorBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding VelocityBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding MeshOrientationBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding ScaleBinding;
    
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
    FNiagaraVariableAttributeBinding MaterialRandomBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding CustomSortingBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding NormalizedAgeBinding;
    
    UPROPERTY(EditAnywhere)
    FNiagaraVariableAttributeBinding CameraOffsetBinding;
    
    UNiagaraMeshRendererProperties();
};

