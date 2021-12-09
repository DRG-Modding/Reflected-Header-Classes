#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "GameplayTask.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "GameplayTask_SpawnActor.generated.h"

class UObject;
class AActor;
class UGameplayTask_SpawnActor;
class UGameplayTaskOwnerInterface;
class IGameplayTaskOwnerInterface;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameplayTask_SpawnActorSuccess, AActor*, SpawnedActor);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameplayTask_SpawnActorDidNotSpawn, AActor*, SpawnedActor);

UCLASS(MinimalAPI)
class UGameplayTask_SpawnActor : public UGameplayTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGameplayTask_SpawnActorSuccess success;
    
    UPROPERTY(BlueprintAssignable)
    FGameplayTask_SpawnActorDidNotSpawn DidNotSpawn;
    
protected:
    UPROPERTY()
    TSubclassOf<AActor> ClassToSpawn;
    
public:
    UFUNCTION(BlueprintCallable)
    static UGameplayTask_SpawnActor* SpawnActor(TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, FVector SpawnLocation, FRotator SpawnRotation, TSubclassOf<AActor> Class, bool bSpawnOnlyOnAuthority);
    
    UFUNCTION(BlueprintCallable)
    void FinishSpawningActor(UObject* WorldContextObject, AActor* SpawnedActor);
    
    UFUNCTION(BlueprintCallable)
    bool BeginSpawningActor(UObject* WorldContextObject, AActor*& SpawnedActor);
    
    UGameplayTask_SpawnActor();
};

