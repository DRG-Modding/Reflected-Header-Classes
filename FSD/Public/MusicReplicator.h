#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ActiveMusicItem.h"
#include "MusicReplicator.generated.h"

UCLASS(Blueprintable)
class AMusicReplicator : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActiveMusic, meta=(AllowPrivateAccess=true))
    TArray<FActiveMusicItem> ActiveMusic;
    
public:
    AMusicReplicator();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveMusic();
    
};

