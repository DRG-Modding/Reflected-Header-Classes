#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine GameInstanceSubsystem
#include "BossFightSubSystem.generated.h"

class UBossFightInterface;
class IBossFightInterface;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBossFightSubSystemOnNewBossFight, const TScriptInterface<IBossFightInterface>&, BossFight);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBossFightSubSystemOnBossFightRemoved, const TScriptInterface<IBossFightInterface>&, BossFight);

UCLASS(BlueprintType)
class UBossFightSubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FBossFightSubSystemOnNewBossFight OnNewBossFight;
    
    UPROPERTY(BlueprintAssignable)
    FBossFightSubSystemOnBossFightRemoved OnBossFightRemoved;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<TScriptInterface<IBossFightInterface>> ActiveBossFights;
    
public:
    UFUNCTION(BlueprintCallable)
    void RegisterBossFight(TScriptInterface<IBossFightInterface> BossFight);
    
    UFUNCTION(BlueprintCallable)
    void DeregisterBossFight(AActor* boss);
    
    UBossFightSubSystem();
};

