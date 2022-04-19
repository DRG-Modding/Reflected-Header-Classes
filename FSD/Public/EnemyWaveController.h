#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EnemyWaveController.generated.h"

UCLASS(Blueprintable)
class UEnemyWaveController : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool IsComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSuitableForSolo;
    
public:
    UEnemyWaveController();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartWave();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResumeWave();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PauseWave();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWaveCompleted();
    
};

