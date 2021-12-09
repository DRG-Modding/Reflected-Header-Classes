#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine GameInstanceSubsystem
//CROSS-MODULE INCLUDE: CoreUObject DateTime
#include "FSDEventManager.generated.h"

class UFSDEvent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDEventManagerOnFSDEventsRefresh);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDEventManagerOnEventActiveChanged, const UFSDEvent*, InFsdEvent, bool, InIsActive);

UCLASS(BlueprintType)
class UFSDEventManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFSDEventManagerOnFSDEventsRefresh OnFSDEventsRefresh;
    
    UPROPERTY(BlueprintAssignable)
    FFSDEventManagerOnEventActiveChanged OnEventActiveChanged;
    
protected:
    UPROPERTY(Transient)
    TSet<FName> PendingActiveEvents;
    
    UPROPERTY(Transient)
    TSet<FName> ActiveEvents;
    
    UPROPERTY(Transient)
    int32 NumFailedRequests;
    
    UPROPERTY(Transient)
    bool BackendDataValid;
    
    UPROPERTY(Transient)
    FDateTime LastRequestTime;
    
    UPROPERTY(Transient)
    float NextCheckTime;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsEventActive(const UFSDEvent* FSDEvent) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UFSDEvent*> GetActiveEventHandlers() const;
    
    UFUNCTION(BlueprintPure)
    bool FSDEventsReady() const;
    
    UFSDEventManager();
};

