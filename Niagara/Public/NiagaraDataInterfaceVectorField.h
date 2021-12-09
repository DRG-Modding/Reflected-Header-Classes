#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceVectorField.generated.h"

class UVectorField;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UVectorField* Field;
    
    UPROPERTY(EditAnywhere)
    bool bTileX;
    
    UPROPERTY(EditAnywhere)
    bool bTileY;
    
    UPROPERTY(EditAnywhere)
    bool bTileZ;
    
    UNiagaraDataInterfaceVectorField();
};

