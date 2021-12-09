#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "EnvQueryGenerator.h"
#include "EnvQueryGenerator_BlueprintBase.generated.h"

class UEnvQueryContext;
class UEnvQueryItemType;
class AActor;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AIMODULE_API UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText GeneratorsActionDescription;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryItemType> GeneratedItemType;
    
    UFUNCTION(BlueprintPure)
    UObject* GetQuerier() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void DoItemGeneration(const TArray<FVector>& ContextLocations) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void AddGeneratedVector(FVector GeneratedVector) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void AddGeneratedActor(AActor* GeneratedActor) const;
    
    UEnvQueryGenerator_BlueprintBase();
};

