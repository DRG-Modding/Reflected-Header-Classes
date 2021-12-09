#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine WorldSubsystem
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "FadeVisibilitySubSystem.generated.h"

class UPrimitiveComponent;
class ULightComponent;
class UMeshComponent;

UCLASS(BlueprintType)
class UFadeVisibilitySubSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
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
    
    UFadeVisibilitySubSystem();
};

