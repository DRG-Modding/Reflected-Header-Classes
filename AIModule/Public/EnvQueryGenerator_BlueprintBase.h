#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EnvQueryGenerator_BlueprintBase.generated.h"

class UEnvQueryContext;
class UEnvQueryItemType;
class UObject;
class AActor;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class AIMODULE_API UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GeneratorsActionDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryItemType> GeneratedItemType;
    
    UEnvQueryGenerator_BlueprintBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetQuerier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoItemGeneration(const TArray<FVector>& ContextLocations) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void AddGeneratedVector(FVector GeneratedVector) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void AddGeneratedActor(AActor* GeneratedActor) const;
    
};

