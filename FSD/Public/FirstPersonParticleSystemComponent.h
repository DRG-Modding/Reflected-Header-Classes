#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAttachLocation -FallbackName=EAttachLocation
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "FirstPersonParticleSystemComponent.generated.h"

class USceneComponent;
class UParticleSystem;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UFirstPersonParticleSystemComponent : public UParticleSystemComponent {
    GENERATED_BODY()
public:
    UFirstPersonParticleSystemComponent();
    UFUNCTION(BlueprintCallable)
    static UParticleSystemComponent* SpawnFirstPersonEmitterAttached(UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy);
    
};

