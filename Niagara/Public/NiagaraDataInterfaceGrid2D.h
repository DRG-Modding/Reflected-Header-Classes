#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "NiagaraDataInterfaceRWBase.h"
#include "NiagaraDataInterfaceGrid2D.generated.h"

UCLASS(Abstract, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 NumCellsX;
    
    UPROPERTY(EditAnywhere)
    int32 NumCellsY;
    
    UPROPERTY(EditAnywhere)
    int32 NumCellsMaxAxis;
    
    UPROPERTY(EditAnywhere)
    int32 NumAttributes;
    
    UPROPERTY(EditAnywhere)
    bool SetGridFromMaxAxis;
    
    UPROPERTY(EditAnywhere)
    FVector2D WorldBBoxSize;
    
    UNiagaraDataInterfaceGrid2D();
};

