#pragma once
#include "CoreMinimal.h"
#include "EnvQueryContext.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "EnvQueryContext_BlueprintBase.generated.h"

class AActor;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ProvideSingleLocation(UObject* QuerierObject, AActor* QuerierActor, FVector& ResultingLocation) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ProvideSingleActor(UObject* QuerierObject, AActor* QuerierActor, AActor*& ResultingActor) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ProvideLocationsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<FVector>& ResultingLocationSet) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ProvideActorsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<AActor*>& ResultingActorsSet) const;
    
    UEnvQueryContext_BlueprintBase();
};

