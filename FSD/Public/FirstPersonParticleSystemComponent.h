#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ParticleSystemComponent
//CROSS-MODULE INCLUDE: Engine EAttachLocation
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "FirstPersonParticleSystemComponent.generated.h"

class USceneComponent;
class UParticleSystem;

UCLASS(EditInlineNew)
class UFirstPersonParticleSystemComponent : public UParticleSystemComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static UParticleSystemComponent* SpawnFirstPersonEmitterAttached(UParticleSystem* EmitterTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy);
    
    UFirstPersonParticleSystemComponent();
};

