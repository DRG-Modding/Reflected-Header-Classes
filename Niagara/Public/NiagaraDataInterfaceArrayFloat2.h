#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceArray.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "NiagaraDataInterfaceArrayFloat2.generated.h"

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> FloatData;
    
    UNiagaraDataInterfaceArrayFloat2();
};

