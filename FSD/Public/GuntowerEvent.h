#pragma once
#include "CoreMinimal.h"
#include "GameEvent.h"
#include "GuntowerModuleLevel.h"
#include "GuntowerEvent.generated.h"

class AGuntowerModule;
class UDamageComponent;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS()
class AGuntowerEvent : public AGameEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USkeletalMeshComponent* BaseMesh;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UDamageComponent* EndExplosionDamage;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<FGuntowerModuleLevel> GuntowerLevels;
    
    UPROPERTY(EditAnywhere)
    FName ModuleAttachBone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TowerExplodeDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DelayBetweenExplosions;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<AGuntowerModule*> TowerModules;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ModuleActive)
    int32 ActiveHostileModules;
    
public:
    UFUNCTION()
    void OnRep_ModuleActive();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnModulesSpawned();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnModuleExploded(AGuntowerModule* explodedModule);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AGuntowerEvent();
};

