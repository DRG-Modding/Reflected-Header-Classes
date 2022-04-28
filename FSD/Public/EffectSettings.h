#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EffectSettings.generated.h"

class UNiagaraSystem;
class UNiagaraParameterCollection;

UCLASS(Blueprintable)
class UEffectSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UNiagaraSystem>> ParticlesForShaderGeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraParameterCollection* NiagaraParameterCollection;
    
    UEffectSettings();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NeedsShadeGeneration() const;
    
    UFUNCTION(BlueprintCallable)
    void MarkShadersGenerated();
    
    UFUNCTION(BlueprintCallable)
    void CompileShaders();
    
};

