#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameplayTask.h"
#include "GameplayTaskSpawnActorDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "GameplayTask_SpawnActor.generated.h"

class AActor;
class UGameplayTask_SpawnActor;
class UGameplayTaskOwnerInterface;
class IGameplayTaskOwnerInterface;
class UObject;

UCLASS(MinimalAPI)
class UGameplayTask_SpawnActor : public UGameplayTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGameplayTaskSpawnActorDelegate success;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGameplayTaskSpawnActorDelegate DidNotSpawn;
    
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ClassToSpawn;
    
public:
    UGameplayTask_SpawnActor();
    UFUNCTION(BlueprintCallable)
    static UGameplayTask_SpawnActor* SpawnActor(TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, FVector SpawnLocation, FRotator SpawnRotation, TSubclassOf<AActor> Class, bool bSpawnOnlyOnAuthority);
    
    UFUNCTION(BlueprintCallable)
    void FinishSpawningActor(UObject* WorldContextObject, AActor* SpawnedActor);
    
    UFUNCTION(BlueprintCallable)
    bool BeginSpawningActor(UObject* WorldContextObject, AActor*& SpawnedActor);
    
};

