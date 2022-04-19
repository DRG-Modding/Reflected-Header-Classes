#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceVolumeTexture.generated.h"

class UVolumeTexture;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVolumeTexture* Texture;
    
    UNiagaraDataInterfaceVolumeTexture();
};

