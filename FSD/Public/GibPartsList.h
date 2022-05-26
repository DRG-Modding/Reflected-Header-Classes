#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "GibPartsList.generated.h"

class UNiagaraComponent;
class UStaticMesh;
class UMaterialInstance;

UCLASS(Blueprintable)
class UGibPartsList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> GibMeshes;
    
    UGibPartsList();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetGibMeshesAndMaterialsOnFX(UNiagaraComponent* ns, UMaterialInstance* Material, float Scale) const;
    
};

