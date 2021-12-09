#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "EPostProcessingType.h"
//CROSS-MODULE INCLUDE: Engine WeightedBlendables
#include "FSDPostProcessingActor.generated.h"

class UObject;
class UPostProcessComponent;
class UMaterialInstanceDynamic;
class APostProcessingManager;
class UBlendableInterface;
class IBlendableInterface;
class UMaterialInterface;

UCLASS(Abstract)
class AFSDPostProcessingActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPostProcessingType PostProcessingType;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UPostProcessComponent* PostProcessComponent;
    
    UPROPERTY(Transient)
    FWeightedBlendables InitialBlendables;
    
public:
    UFUNCTION(BlueprintCallable)
    static void UnapplyPostProcessingBlendablesByType(UObject* WorldContext, EPostProcessingType Type);
    
    UFUNCTION(BlueprintCallable)
    static void UnapplyPostProcessingBlendablesByID(UObject* WorldContext, const FName InID);
    
    UFUNCTION(BlueprintCallable)
    static void UnapplyPostProcessingBlendable(UObject* WorldContext, EPostProcessingType Type, TScriptInterface<IBlendableInterface> InBlendableObject);
    
    UFUNCTION(BlueprintCallable)
    static void UnapplyAllPostProcessingBlendables(UObject* WorldContext);
    
protected:
    UFUNCTION()
    void SetupHDRColorGamma();
    
    UFUNCTION()
    void SetPostProcessManager(APostProcessingManager* InManager);
    
public:
    UFUNCTION(BlueprintPure)
    static UMaterialInstanceDynamic* GetPostProcessingMaterialInstance(UObject* WorldContext, UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    static UMaterialInstanceDynamic* ApplyPostProcessingMaterial(UObject* WorldContext, EPostProcessingType Type, UMaterialInterface* Material, float InWeight, const FName InID);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyPostProcessingBlendable(UObject* WorldContext, EPostProcessingType Type, TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight, const FName InID);
    
    AFSDPostProcessingActor();
};

