#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceGrid3D.h"
#include "NiagaraDataInterfaceNeighborGrid3D.generated.h"

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MaxNeighborsPerCell;
    
    UNiagaraDataInterfaceNeighborGrid3D();
};

