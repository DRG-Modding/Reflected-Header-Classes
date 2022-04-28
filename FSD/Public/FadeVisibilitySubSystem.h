#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "FadeVisibilitySubSystem.generated.h"

class UMeshComponent;
class ULightComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UFadeVisibilitySubSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UFadeVisibilitySubSystem();
    UFUNCTION(BlueprintCallable)
    static void ScalePrimitive(UPrimitiveComponent* Component, FVector StartScale, FVector EndScale, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void ScaleOutPrimitive(UPrimitiveComponent* Component, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void ScaleInPrimitive(UPrimitiveComponent* Component, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void FadeOutLight(ULightComponent* Light, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void FadeInMaterialByName(UMeshComponent* Component, FName Name, FName ParameterName, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void FadeInMaterialByIndex(UMeshComponent* Component, int32 MaterialIndex, FName ParameterName, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void FadeInLight(ULightComponent* Light, float Duration);
    
};

