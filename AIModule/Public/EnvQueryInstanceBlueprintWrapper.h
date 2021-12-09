#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EQSQueryResultSourceInterface.h"
#include "EEnvQueryStatus.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "EnvQueryInstanceBlueprintWrapper.generated.h"

class AActor;
class UEnvQueryItemType;
class UEnvQueryInstanceBlueprintWrapper;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEnvQueryInstanceBlueprintWrapperOnQueryFinishedEvent, UEnvQueryInstanceBlueprintWrapper*, QueryInstance, TEnumAsByte<EEnvQueryStatus::Type>, QueryStatus);

UCLASS(BlueprintType)
class AIMODULE_API UEnvQueryInstanceBlueprintWrapper : public UObject, public IEQSQueryResultSourceInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    int32 QueryID;
    
    UPROPERTY(BlueprintReadOnly)
    TSubclassOf<UEnvQueryItemType> ItemType;
    
    UPROPERTY(BlueprintReadOnly)
    int32 OptionIndex;
    
    UPROPERTY(BlueprintAssignable)
    FEnvQueryInstanceBlueprintWrapperOnQueryFinishedEvent OnQueryFinishedEvent;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetNamedParam(FName ParamName, float Value);
    
    UFUNCTION(BlueprintPure)
    TArray<FVector> GetResultsAsLocations() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AActor*> GetResultsAsActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetQueryResultsAsLocations(TArray<FVector>& ResultLocations) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetQueryResultsAsActors(TArray<AActor*>& ResultActors) const;
    
    UFUNCTION(BlueprintPure)
    float GetItemScore(int32 ItemIndex) const;
    
    UEnvQueryInstanceBlueprintWrapper();
};

