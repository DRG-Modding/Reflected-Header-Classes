#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceRWBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
#include "ESetResolutionMethod.h"
#include "NiagaraDataInterfaceGrid3D.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector NumCells;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float CellSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumCellsMaxAxis;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    ESetResolutionMethod SetResolutionMethod;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldBBoxSize;
    
    UNiagaraDataInterfaceGrid3D();
};

