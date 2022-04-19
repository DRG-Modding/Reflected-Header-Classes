#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "ENDILandscape_SourceMode.h"
#include "NiagaraDataInterfaceLandscape.generated.h"

class AActor;
class UPhysicalMaterial;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SourceLandscape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENDILandscape_SourceMode SourceMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPhysicalMaterial*> PhysicalMaterials;
    
    UNiagaraDataInterfaceLandscape();
};

