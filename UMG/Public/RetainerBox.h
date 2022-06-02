#pragma once
#include "CoreMinimal.h"
#include "ContentWidget.h"
#include "RetainerBox.generated.h"

class UMaterialInterface;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class UMG_API URetainerBox : public UContentWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRetainRender;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RenderOnInvalidation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RenderOnPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Phase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PhaseCount;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* EffectMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextureParameter;
    
public:
    URetainerBox();
    UFUNCTION(BlueprintCallable)
    void SetTextureParameter(FName NewTextureParameter);
    
    UFUNCTION(BlueprintCallable)
    void SetRetainRendering(bool bInRetainRendering);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderingPhase(int32 RenderPhase, int32 TotalPhases);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectMaterial(UMaterialInterface* NewEffectMaterial);
    
    UFUNCTION(BlueprintCallable)
    void RequestRender();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstanceDynamic* GetEffectMaterial() const;
    
};

