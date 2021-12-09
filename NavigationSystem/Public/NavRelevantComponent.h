#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine NavRelevantInterface
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "NavRelevantComponent.generated.h"

class UObject;

UCLASS(BlueprintType)
class NAVIGATIONSYSTEM_API UNavRelevantComponent : public UActorComponent, public INavRelevantInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    uint8 bAttachToOwnersRoot: 1;
    
    UPROPERTY(Transient)
    UObject* CachedNavParent;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetNavigationRelevancy(bool bRelevant);
    
    UNavRelevantComponent();
};

