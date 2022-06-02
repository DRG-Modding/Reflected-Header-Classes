#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "TerminatorShoutState.h"
#include "ETerminatorShoutState.h"
#include "DelegateDelegate.h"
#include "TerminatorTalkMaterial.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAudioComponentPlayState -FallbackName=EAudioComponentPlayState
#include "TerminatorShoutComponent.generated.h"

class UAudioComponent;
class USoundCue;
class UPointLightComponent;
class UMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTerminatorShoutComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTerminatorShoutState> States;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnShoutStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnShoutEnded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTerminatorTalkMaterial> TalkMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UPointLightComponent* TalkLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SoundOriginSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMeshComponent* OwnerMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* ShoutInstance;
    
public:
    UTerminatorShoutComponent();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetShoutState(ETerminatorShoutState State, float delayShout);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShoutStart();
    
    UFUNCTION(BlueprintCallable)
    void OnShoutInstancePlayStateChanged(EAudioComponentPlayState PlayState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShoutEnd();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_PlayShout(USoundCue* Shout);
    
};

