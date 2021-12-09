#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "SpawnRarityModifierItem.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
//CROSS-MODULE INCLUDE: GameplayTags GameplayTag
#include "SpawnQueueItem.h"
#include "EnemySpawnManager.generated.h"

class UEnemyDescriptor;
class APawn;
class AProceduralSetup;
class UStatusEffect;
class USpawnEffectsComponent;
class AActor;
class UHealthComponentBase;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemySpawnManagerOnEnemyDestroyed, APawn*, enemy);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemySpawnManagerOnEnemyDied, APawn*, enemy);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FEnemySpawnManagerCallback, APawn*, enemy);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEnemySpawnManagerOnEnemySpawned, APawn*, enemy, UEnemyDescriptor*, descriptor);

UCLASS(BlueprintType)
class FSD_API UEnemySpawnManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEnemySpawnManagerOnEnemyDestroyed OnEnemyDestroyed;
    
    UPROPERTY(BlueprintAssignable)
    FEnemySpawnManagerOnEnemyDied OnEnemyDied;
    
    UPROPERTY(BlueprintAssignable)
    FEnemySpawnManagerOnEnemySpawned OnEnemySpawned;
    
protected:
    UPROPERTY(Export, Transient)
    USpawnEffectsComponent* SpawnEffects;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<APawn*> ActiveEnemies;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<APawn*> ActiveSwarmerEnemies;
    
    UPROPERTY(Transient)
    TArray<TSubclassOf<UStatusEffect>> ActiveGlobalStatusEffects;
    
    UPROPERTY(Transient)
    TMap<UEnemyDescriptor*, FSpawnRarityModifierItem> SpawnRarityModifiers;
    
    UPROPERTY(Transient)
    TArray<APawn*> ActiveCritters;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<APawn*> CritcalEnemies;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxActiveEnemies;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxActiveSwarmers;
    
    UPROPERTY(EditAnywhere)
    int32 MaxActiveCritters;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxDistanceBeforeCleanup;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag SwarmerTag;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag RegularTag;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag CritterTag;
    
    UPROPERTY(Transient)
    AProceduralSetup* ProceduralSetup;
    
    UPROPERTY(Transient)
    TArray<FSpawnQueueItem> SpawnQueue;
    
    UPROPERTY(Transient)
    bool bDestroyingAllEnemies;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnerDestroyed(APawn* Actor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SpawnEnemy(UEnemyDescriptor* descriptor, const FTransform& Transform, const FEnemySpawnManagerCallback& Callback, bool useSpawnFX, bool Alert);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawningEnabled(bool newSpawningEnabled);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGlobalStatusEffect(TSubclassOf<UStatusEffect> StatusEffect);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterSpawner(APawn* Actor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterSpawnedEnemy(AActor* enemy);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PromoteToCritical(APawn* Pawn);
    
private:
    UFUNCTION()
    void OnMatchStarted();
    
    UFUNCTION()
    void OnMatchEnded();
    
public:
    UFUNCTION(BlueprintPure)
    bool GetSpawningEnabled() const;
    
private:
    UFUNCTION()
    void EnemyDestroyed(AActor* Actor);
    
    UFUNCTION()
    void EnemyDeath(UHealthComponentBase* HealthComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    void DestroyAllEnemies();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintPure)
    bool CanSpawn(UEnemyDescriptor* EnemyDescriptor) const;
    
    UFUNCTION(BlueprintCallable)
    void AddGlobalStatusEffect(TSubclassOf<UStatusEffect> StatusEffect);
    
    UEnemySpawnManager();
};

