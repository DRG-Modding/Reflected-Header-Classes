#pragma once
#include "CoreMinimal.h"
#include "ARBaseAsyncTaskBlueprintProxy.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GetGeoLocationAsyncTaskBlueprintProxy.generated.h"

class UGetGeoLocationAsyncTaskBlueprintProxy;
class UObject;

UCLASS()
class AUGMENTEDREALITY_API UGetGeoLocationAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FGetGeoLocationDelegate, float, Longitude, float, Latitude, float, Altitude, const FString&, Error);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetGeoLocationDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetGeoLocationDelegate OnFailed;
    
    UGetGeoLocationAsyncTaskBlueprintProxy();
    UFUNCTION(BlueprintCallable)
    static UGetGeoLocationAsyncTaskBlueprintProxy* GetGeoLocationAtWorldPosition(UObject* WorldContextObject, const FVector& WorldPosition);
    
};

