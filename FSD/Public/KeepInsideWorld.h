#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "KeepInsideWorld.generated.h"

class UObject;
class AActor;

UCLASS(BlueprintType)
class UKeepInsideWorld : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AActor>> ActorsToKeepInsideWorld;
    
    UPROPERTY(Transient)
    int32 IteratorIndex;
    
public:
    UFUNCTION(BlueprintCallable)
    static void UnregisterForKeepInsideWorld(UObject* WorldContextObject, AActor* Actor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void RegisterForKeepInsideWorld(UObject* WorldContextObject, AActor* Actor);
    
    UKeepInsideWorld();
};

