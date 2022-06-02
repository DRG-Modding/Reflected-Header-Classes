#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ENCPoolMethod.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAttachLocation -FallbackName=EAttachLocation
#include "NiagaraFunctionLibrary.generated.h"

class USceneComponent;
class UNiagaraComponent;
class UNiagaraSystem;
class UStaticMesh;
class UObject;
class UVolumeTexture;
class UTexture;
class UTexture2DArray;
class UStaticMeshComponent;
class USkeletalMeshComponent;
class UNiagaraParameterCollectionInstance;
class UNiagaraParameterCollection;

UCLASS(Blueprintable)
class NIAGARA_API UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNiagaraFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static UNiagaraComponent* SpawnSystemAttached(UNiagaraSystem* SystemTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);
    
    UFUNCTION(BlueprintCallable)
    static UNiagaraComponent* SpawnSystemAtLocation(const UObject* WorldContextObject, UNiagaraSystem* SystemTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);
    
    UFUNCTION(BlueprintCallable)
    static void SetVolumeTextureObject(UNiagaraComponent* NiagaraSystem, const FString& OverrideName, UVolumeTexture* Texture);
    
    UFUNCTION(BlueprintCallable)
    static void SetTextureObject(UNiagaraComponent* NiagaraSystem, const FString& OverrideName, UTexture* Texture);
    
    UFUNCTION(BlueprintCallable)
    static void SetTexture2DArrayObject(UNiagaraComponent* NiagaraSystem, const FString& OverrideName, UTexture2DArray* Texture);
    
    UFUNCTION(BlueprintCallable)
    static void SetSkeletalMeshDataInterfaceSamplingRegions(UNiagaraComponent* NiagaraSystem, const FString& OverrideName, const TArray<FName>& SamplingRegions);
    
    UFUNCTION(BlueprintCallable)
    static void OverrideSystemUserVariableStaticMeshComponent(UNiagaraComponent* NiagaraSystem, const FString& OverrideName, UStaticMeshComponent* StaticMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    static void OverrideSystemUserVariableStaticMesh(UNiagaraComponent* NiagaraSystem, const FString& OverrideName, UStaticMesh* StaticMesh);
    
    UFUNCTION(BlueprintCallable)
    static void OverrideSystemUserVariableSkeletalMeshComponent(UNiagaraComponent* NiagaraSystem, const FString& OverrideName, USkeletalMeshComponent* SkeletalMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    static UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(UObject* WorldContextObject, UNiagaraParameterCollection* Collection);
    
};

