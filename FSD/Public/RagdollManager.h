#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "RagdollItem.h"
#include "RagdollManager.generated.h"

class AActor;
class UMaterialInstanceDynamic;

UCLASS(BlueprintType)
class URagdollManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<FRagdollItem> Items;
    
public:
    UFUNCTION(BlueprintCallable)
    void StartRagdoll(AActor* Actor, const TArray<UMaterialInstanceDynamic*>& Materials, float desiredDuration);
    
    URagdollManager();
};

