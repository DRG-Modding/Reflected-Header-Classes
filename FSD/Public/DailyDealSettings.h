#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DailyDeal.h"
#include "DailyDealSetup.h"
#include "DailyDealSettings.generated.h"

class UObject;

UCLASS(Blueprintable)
class UDailyDealSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDailyDealSetup> DailyDeals;
    
    UDailyDealSettings();
    UFUNCTION(BlueprintCallable)
    static bool IsDailyDealBought(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDailyDealSeed();
    
    UFUNCTION(BlueprintCallable)
    static void GetDailyDeal(FDailyDeal& outDeal);
    
    UFUNCTION(BlueprintCallable)
    static bool CanAffordDailyDeal(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool BuyDailyDeal(UObject* WorldContextObject);
    
};

