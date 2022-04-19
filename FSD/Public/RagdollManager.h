#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "RagdollItem.h"
#include "RagdollManager.generated.h"

class AActor;
class UMaterialInstanceDynamic;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class URagdollManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRagdollItem> Items;
    
public:
    URagdollManager();
    UFUNCTION(BlueprintCallable)
    void StartRagdoll(AActor* Actor, const TArray<UMaterialInstanceDynamic*>& Materials, float desiredDuration);
    
};

