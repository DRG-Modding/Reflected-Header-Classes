#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject DateTime
#include "DeepDiveBank.h"
#include "DeepDiveManager.generated.h"

class UDeepDive;
class UGeneratedMission;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDeepDiveManagerOnDeepDivesRefresh);

UCLASS(BlueprintType)
class UDeepDiveManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDeepDiveManagerOnDeepDivesRefresh OnDeepDivesRefresh;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    UDeepDive* ActiveNormalDeepDive;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UDeepDive* ActiveHardDeepDive;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UDeepDive* ActiveDeepDive;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UGeneratedMission* CurrentMission;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float currentDepth;
    
    UPROPERTY(Transient)
    TMap<int32, FDeepDiveBank> DeepDiveBank;
    
    UPROPERTY(Transient)
    int32 NumFailedRequests;
    
    UPROPERTY(Transient)
    int32 BackendDataValid;
    
    UPROPERTY(Transient)
    int32 BackendSeed;
    
    UPROPERTY(Transient)
    bool LockSeed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FDateTime BackendExpirationTime;
    
    UPROPERTY(Transient)
    FDateTime LastRequestTime;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartDeepDive(UDeepDive* DeepDive);
    
    UFUNCTION(BlueprintCallable)
    void ReInitialize();
    
    UFUNCTION(BlueprintCallable)
    void MarkGivenRewards();
    
    UFUNCTION(BlueprintPure)
    bool IsEliteDeepDive(UGeneratedMission* mission) const;
    
    UFUNCTION(BlueprintPure)
    UDeepDive* GetDeepDiveFromMission(UGeneratedMission* mission) const;
    
    UFUNCTION(BlueprintPure)
    UGeneratedMission* GetCurrentSingleMission() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentDeepDiveStage() const;
    
    UFUNCTION(BlueprintPure)
    UDeepDive* GetActiveNormalDeepDive() const;
    
    UFUNCTION(BlueprintPure)
    UDeepDive* GetActiveHardDeepDive() const;
    
    UFUNCTION(BlueprintPure)
    UDeepDive* GetActiveDeepDive() const;
    
    UFUNCTION(BlueprintCallable)
    bool CompleteCurrentSingleMission();
    
    UFUNCTION(BlueprintPure)
    bool AreAllSelectedClassesQualified() const;
    
    UDeepDiveManager();
};

