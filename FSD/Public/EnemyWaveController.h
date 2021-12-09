#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EnemyWaveController.generated.h"

UCLASS(Blueprintable)
class UEnemyWaveController : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient)
    bool IsComplete;
    
    UPROPERTY(EditAnywhere)
    bool IsSuitableForSolo;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void StartWave();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResumeWave();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PauseWave();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWaveCompleted();
    
    UEnemyWaveController();
};
