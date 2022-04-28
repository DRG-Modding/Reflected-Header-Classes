#pragma once
#include "CoreMinimal.h"
#include "RagdollItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "RagdollManager.generated.h"

class UMaterialInstanceDynamic;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URagdollManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRagdollItem> Items;
    
public:
    URagdollManager();
    UFUNCTION(BlueprintCallable)
    void StartRagdoll(AActor* Actor, const TArray<UMaterialInstanceDynamic*>& Materials, float desiredDuration);
    
};

