#pragma once
#include "CoreMinimal.h"
#include "ActiveMusicItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MusicReplicator.generated.h"

UCLASS()
class AMusicReplicator : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_ActiveMusic, meta=(AllowPrivateAccess=true))
    TArray<FActiveMusicItem> ActiveMusic;
    
public:
    AMusicReplicator();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveMusic();
    
};

