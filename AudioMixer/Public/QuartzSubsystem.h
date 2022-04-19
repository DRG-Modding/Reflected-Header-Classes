#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EQuartzCommandQuantization -FallbackName=EQuartzCommandQuantization
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=QuartzTransportTimeStamp -FallbackName=QuartzTransportTimeStamp
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=QuartzClockSettings -FallbackName=QuartzClockSettings
#include "QuartzSubsystem.generated.h"

class UObject;
class UQuartzClockHandle;

UCLASS(BlueprintType)
class AUDIOMIXER_API UQuartzSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UQuartzSubsystem();
    UFUNCTION(BlueprintCallable)
    bool IsQuartzEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool IsClockRunning(const UObject* WorldContextObject, FName ClockName);
    
    UFUNCTION(BlueprintCallable)
    float GetRoundTripMinLatency(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    float GetRoundTripMaxLatency(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    float GetRoundTripAverageLatency(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    UQuartzClockHandle* GetHandleForClock(const UObject* WorldContextObject, FName ClockName);
    
    UFUNCTION(BlueprintCallable)
    float GetGameThreadToAudioRenderThreadMinLatency(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    float GetGameThreadToAudioRenderThreadMaxLatency(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    float GetGameThreadToAudioRenderThreadAverageLatency(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    float GetEstimatedClockRunTime(const UObject* WorldContextObject, const FName& InClockName);
    
    UFUNCTION(BlueprintCallable)
    float GetDurationOfQuantizationTypeInSeconds(const UObject* WorldContextObject, FName ClockName, const EQuartzCommandQuantization& QuantizationType, float Multiplier);
    
    UFUNCTION(BlueprintCallable)
    FQuartzTransportTimeStamp GetCurrentClockTimestamp(const UObject* WorldContextObject, const FName& InClockName);
    
    UFUNCTION(BlueprintCallable)
    float GetAudioRenderThreadToGameThreadMinLatency();
    
    UFUNCTION(BlueprintCallable)
    float GetAudioRenderThreadToGameThreadMaxLatency();
    
    UFUNCTION(BlueprintCallable)
    float GetAudioRenderThreadToGameThreadAverageLatency();
    
    UFUNCTION(BlueprintCallable)
    bool DoesClockExist(const UObject* WorldContextObject, FName ClockName);
    
    UFUNCTION(BlueprintCallable)
    void DeleteClockByName(const UObject* WorldContextObject, FName ClockName);
    
    UFUNCTION(BlueprintCallable)
    void DeleteClockByHandle(const UObject* WorldContextObject, UPARAM(Ref) UQuartzClockHandle*& InClockHandle);
    
    UFUNCTION(BlueprintCallable)
    UQuartzClockHandle* CreateNewClock(const UObject* WorldContextObject, FName ClockName, FQuartzClockSettings InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager);
    
};

