#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ScaledEffect.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "DecalData.h"
#include "FSDGameplayStatics.generated.h"

class UObject;
class UDecalComponent;
class UFXSystemComponent;
class AActor;
class UMaterialInterface;
class UAudioComponent;

UCLASS(BlueprintType)
class UFSDGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFSDGameplayStatics();
    UFUNCTION(BlueprintCallable)
    static UFXSystemComponent* SpawnScaledEmitterAtLocation(UObject* WorldContextObject, FScaledEffect ScaledEffect, FVector Location, FRotator Rotation, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable)
    static UDecalComponent* SpawnDecalData(const UObject* WorldContextObject, const FVector& Location, const FVector& upVector, const FDecalData& DecalData, bool randomRollRotation);
    
    UFUNCTION(BlueprintCallable)
    static UDecalComponent* SpawnDecalAtActor(AActor* Actor, UMaterialInterface* DecalMaterial, float Size, float Duration, float FadeDuration);
    
    UFUNCTION(BlueprintCallable)
    static UDecalComponent* SpawnDecal(const UObject* WorldContextObject, UMaterialInterface* DecalMaterial, const FVector& Location, const FVector& upVector, float Size, float Duration, float FadeDuration);
    
    UFUNCTION(BlueprintCallable)
    static void SetControllerVibrationSubmixSend(const UObject* WorldContextObject, UAudioComponent* AudioComponent, float SendLevel);
    
    UFUNCTION(BlueprintCallable)
    static void SetControllerSpeakerSubmixSend(const UObject* WorldContextObject, UAudioComponent* AudioComponent, float SendLevel);
    
};

