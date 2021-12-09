#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "EnemyDetonationSetting.generated.h"

class UDamageComponent;
class UNiagaraSystem;
class USoundCue;

UCLASS()
class UEnemyDetonationSetting : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Instanced)
    UDamageComponent* FireDamage;
    
    UPROPERTY(EditAnywhere)
    UNiagaraSystem* FireParticles;
    
    UPROPERTY(EditAnywhere)
    USoundCue* FireSound;
    
    UPROPERTY(EditAnywhere, Instanced)
    UDamageComponent* IceDamage;
    
    UPROPERTY(EditAnywhere)
    UNiagaraSystem* IceParticles;
    
    UPROPERTY(EditAnywhere)
    USoundCue* IceSound;
    
public:
    UEnemyDetonationSetting();
};

