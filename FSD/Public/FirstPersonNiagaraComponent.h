#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Niagara NiagaraComponent
//CROSS-MODULE INCLUDE: Engine EAttachLocation
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "FirstPersonNiagaraComponent.generated.h"

class UNiagaraSystem;
class USceneComponent;

UCLASS(EditInlineNew)
class UFirstPersonNiagaraComponent : public UNiagaraComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static UNiagaraComponent* SpawnFirstPersonEmitterAttached(UNiagaraSystem* inNiagaraSystem, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool inAutoDestroy);
    
    UFirstPersonNiagaraComponent();
};

