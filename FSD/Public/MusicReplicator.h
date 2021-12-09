#pragma once
#include "CoreMinimal.h"
#include "ActiveMusicItem.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "MusicReplicator.generated.h"

UCLASS()
class AMusicReplicator : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ActiveMusic)
    TArray<FActiveMusicItem> ActiveMusic;
    
    UFUNCTION()
    void OnRep_ActiveMusic();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AMusicReplicator();
};

