#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceRWBase.h"
#include "NiagaraUserParameterBinding.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETextureRenderTargetFormat -FallbackName=ETextureRenderTargetFormat
#include "NiagaraDataInterfaceRenderTargetCube.generated.h"

class UTextureRenderTargetCube;

UCLASS(Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceRenderTargetCube : public UNiagaraDataInterfaceRWBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Size;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETextureRenderTargetFormat> OverrideRenderTargetFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInheritUserParameterSettings: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideFormat: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraUserParameterBinding RenderTargetUserParameter;
    
protected:
    UPROPERTY(DuplicateTransient, EditAnywhere, Transient)
    TMap<uint64, UTextureRenderTargetCube*> ManagedRenderTargets;
    
public:
    UNiagaraDataInterfaceRenderTargetCube();
};

