#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "DifficultyManager.generated.h"

class UDifficultySetting;
class AFSDGameMode;
class AFSDGameState;

UCLASS(BlueprintType)
class UDifficultyManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float MinModifierEnemyCount;
    
    UPROPERTY(EditAnywhere)
    float MinModifierAttackCooldown;
    
    UPROPERTY(EditAnywhere)
    float MinModifierSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    int32 ForcedPlayerCount;
    
    UPROPERTY(Transient)
    AFSDGameMode* GameMode;
    
    UPROPERTY(Transient)
    AFSDGameState* GameState;
    
public:
    UFUNCTION(BlueprintCallable)
    UDifficultySetting* SelectDifficulty(int32 Index);
    
    UFUNCTION(BlueprintPure)
    float GetSmallEnemyDamageResistance() const;
    
    UFUNCTION(BlueprintPure)
    float GetPointExtractionScaler() const;
    
    UFUNCTION(BlueprintPure)
    float GetExtraLargeEnemyDamageResistanceD() const;
    
    UFUNCTION(BlueprintPure)
    float GetExtraLargeEnemyDamageResistanceC() const;
    
    UFUNCTION(BlueprintPure)
    float GetExtraLargeEnemyDamageResistanceB() const;
    
    UFUNCTION(BlueprintPure)
    float GetExtraLargeEnemyDamageResistance() const;
    
    UFUNCTION(BlueprintPure)
    float GetEnemyDamageResistance() const;
    
    UFUNCTION(BlueprintPure)
    float GetEnemyDamageModifier() const;
    
    UFUNCTION(BlueprintPure)
    float GetEnemyCountModifier() const;
    
    UFUNCTION(BlueprintPure)
    UDifficultySetting* GetCurrentDifficulty() const;
    
    UFUNCTION(BlueprintPure)
    float GetBossDifficultyScaler() const;
    
    UDifficultyManager();
};

