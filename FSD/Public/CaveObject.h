#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CaveObject.generated.h"

UCLASS(Abstract, Blueprintable)
class ACaveObject : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanCharacterStandOn;
    
public:
    ACaveObject();
protected:
    UFUNCTION(BlueprintCallable)
    void TriggerNetworkUpdate();
    
    UFUNCTION(BlueprintCallable)
    void ResumeNetworkUpdates();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void Recieve_OnGameStarted();
    
    UFUNCTION(BlueprintCallable)
    void PauseNetworkUpdates();
    
};

