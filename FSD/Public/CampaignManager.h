#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject DateTime
#include "ECampaignType.h"
#include "CampaignManager.generated.h"

class UCampaign;
class UGeneratedMission;
class UFSDSaveGame;
class AFSDPlayerController;
class UDifficultySetting;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCampaignManagerOnCampaignCompleted);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCampaignManagerOnCampaignChanged);

UCLASS(Abstract, BlueprintType)
class UCampaignManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCampaignManagerOnCampaignCompleted OnCampaignCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FCampaignManagerOnCampaignChanged OnCampaignChanged;
    
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UCampaign> MainCampaign;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UCampaign>> WeeklyCampaigns;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UCampaign>> MatrixCoreHuntCampaigns;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UCampaign>> SideCampaigns;
    
    UPROPERTY(Transient)
    TArray<TSubclassOf<UCampaign>> EventCampaigns;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UCampaign* ActiveCampaign;
    
    UPROPERTY(Transient)
    int32 NumFailedRequests;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool WeeklyBackendDataValid;
    
    UPROPERTY(Transient)
    int32 WeeklyBackendSeed;
    
    UPROPERTY(Transient)
    FDateTime WeeklyBackendExpirationTime;
    
    UPROPERTY(Transient)
    FDateTime LastRequestTime;
    
public:
    UFUNCTION(BlueprintCallable)
    void StartNewCampaign(TSubclassOf<UCampaign> campaignClass, UFSDSaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable)
    void SkipMainCampaign(UObject* WorldContextObject);
    
protected:
    UFUNCTION()
    void OnEventsRefreshed();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsWeeklyCampaignCompleted(UObject* WorldContext, ECampaignType campaigntype) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInCampaignMission(AFSDPlayerController* Player) const;
    
    UFUNCTION(BlueprintPure)
    bool IsCampaignRestrictionsMet(UObject* WorldContextObject, UGeneratedMission* mission, UDifficultySetting* optionalDifficulty) const;
    
    UFUNCTION(BlueprintPure)
    bool IsCampaignMission(UObject* WorldContextObject, UGeneratedMission* mission) const;
    
    UFUNCTION(BlueprintPure)
    bool IsActiveCampaign(UCampaign* Campaign) const;
    
    UFUNCTION(BlueprintPure)
    TArray<TSubclassOf<UCampaign>> GetUncompletedCampaigns(AFSDPlayerController* Player) const;
    
    UFUNCTION(BlueprintPure)
    UGeneratedMission* GetCampaingMissionFromSeeds(UObject* WorldContextObject, int32 GlobalSeed, int32 MissionSeed) const;
    
    UFUNCTION(BlueprintPure)
    UGeneratedMission* GetCampaingMission(const TArray<UGeneratedMission*>& missions, int32 MissionSeed) const;
    
    UFUNCTION(BlueprintCallable)
    void AbortActiveCampaign(UFSDSaveGame* SaveGame);
    
    UCampaignManager();
};

