#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceMeshRendererInfo.generated.h"

class UNiagaraMeshRendererProperties;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceMeshRendererInfo : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraMeshRendererProperties* MeshRenderer;
    
public:
    UNiagaraDataInterfaceMeshRendererInfo();
};

