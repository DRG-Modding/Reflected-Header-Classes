#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceRWBase.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject IntVector
#include "NiagaraDataInterfaceGrid3D.generated.h"

UCLASS(Abstract, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FIntVector NumVoxels;
    
    UPROPERTY(EditAnywhere)
    float VoxelSize;
    
    UPROPERTY(EditAnywhere)
    bool SetGridFromVoxelSize;
    
    UPROPERTY(EditAnywhere)
    FVector WorldBBoxSize;
    
    UNiagaraDataInterfaceGrid3D();
};

