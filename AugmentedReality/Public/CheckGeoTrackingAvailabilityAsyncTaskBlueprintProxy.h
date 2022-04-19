#pragma once
#include "CoreMinimal.h"
#include "ARBaseAsyncTaskBlueprintProxy.h"
#include "CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.generated.h"

class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy;
class UObject;

UCLASS()
class AUGMENTEDREALITY_API UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGeoTrackingAvailabilityDelegate, bool, bIsAvailable, const FString&, Error);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGeoTrackingAvailabilityDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGeoTrackingAvailabilityDelegate OnFailed;
    
    UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy();
    UFUNCTION(BlueprintCallable)
    static UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailabilityAtLocation(UObject* WorldContextObject, float Longitude, float Latitude);
    
    UFUNCTION(BlueprintCallable)
    static UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailability(UObject* WorldContextObject);
    
};

