#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=QuartzTransportTimeStamp -FallbackName=QuartzTransportTimeStamp
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EQuartzCommandQuantization -FallbackName=EQuartzCommandQuantization
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnQuartzMetronomeEventBP__DelegateSignature -FallbackName=OnQuartzMetronomeEventBPDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnQuartzCommandEventBP__DelegateSignature -FallbackName=OnQuartzCommandEventBPDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=QuartzQuantizationBoundary -FallbackName=QuartzQuantizationBoundary
#include "QuartzClockHandle.generated.h"

class UQuartzClockHandle;
class UQuartzSubsystem;
class UWorld;

UCLASS(Blueprintable, Transient)
class AUDIOMIXER_API UQuartzClockHandle : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UQuartzSubsystem* QuartzSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorld* WorldPtr;
    
public:
    UQuartzClockHandle();
    UFUNCTION(BlueprintCallable)
    void UnsubscribeFromTimeDivision(const UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, UQuartzClockHandle*& ClockHandle);
    
    UFUNCTION(BlueprintCallable)
    void UnsubscribeFromAllTimeDivisions(const UObject* WorldContextObject, UQuartzClockHandle*& ClockHandle);
    
    UFUNCTION(BlueprintCallable)
    void SubscribeToQuantizationEvent(const UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, const FOnQuartzMetronomeEventBP& OnQuantizationEvent, UQuartzClockHandle*& ClockHandle);
    
    UFUNCTION(BlueprintCallable)
    void SubscribeToAllQuantizationEvents(const UObject* WorldContextObject, const FOnQuartzMetronomeEventBP& OnQuantizationEvent, UQuartzClockHandle*& ClockHandle);
    
    UFUNCTION(BlueprintCallable)
    void StopClock(const UObject* WorldContextObject, bool CancelPendingEvents, UQuartzClockHandle*& ClockHandle);
    
    UFUNCTION(BlueprintCallable)
    void StartOtherClock(const UObject* WorldContextObject, FName OtherClockName, FQuartzQuantizationBoundary InQuantizationBoundary, const FOnQuartzCommandEventBP& InDelegate);
    
    UFUNCTION(BlueprintCallable)
    void StartClock(const UObject* WorldContextObject, UQuartzClockHandle*& ClockHandle);
    
    UFUNCTION(BlueprintCallable)
    void SetTicksPerSecond(const UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FOnQuartzCommandEventBP& Delegate, UQuartzClockHandle*& ClockHandle, float TicksPerSecond);
    
    UFUNCTION(BlueprintCallable)
    void SetThirtySecondNotesPerMinute(const UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FOnQuartzCommandEventBP& Delegate, UQuartzClockHandle*& ClockHandle, float ThirtySecondsNotesPerMinute);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondsPerTick(const UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FOnQuartzCommandEventBP& Delegate, UQuartzClockHandle*& ClockHandle, float SecondsPerTick);
    
    UFUNCTION(BlueprintCallable)
    void SetMillisecondsPerTick(const UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FOnQuartzCommandEventBP& Delegate, UQuartzClockHandle*& ClockHandle, float MillisecondsPerTick);
    
    UFUNCTION(BlueprintCallable)
    void SetBeatsPerMinute(const UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FOnQuartzCommandEventBP& Delegate, UQuartzClockHandle*& ClockHandle, float BeatsPerMinute);
    
    UFUNCTION(BlueprintCallable)
    void ResumeClock(const UObject* WorldContextObject, UQuartzClockHandle*& ClockHandle);
    
    UFUNCTION(BlueprintCallable)
    void ResetTransportQuantized(const UObject* WorldContextObject, FQuartzQuantizationBoundary InQuantizationBoundary, const FOnQuartzCommandEventBP& InDelegate, UQuartzClockHandle*& ClockHandle);
    
    UFUNCTION(BlueprintCallable)
    void ResetTransport(const UObject* WorldContextObject, const FOnQuartzCommandEventBP& InDelegate);
    
    UFUNCTION(BlueprintCallable)
    void PauseClock(const UObject* WorldContextObject, UQuartzClockHandle*& ClockHandle);
    
    UFUNCTION(BlueprintCallable)
    bool IsClockRunning(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTicksPerSecond(const UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetThirtySecondNotesPerMinute(const UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSecondsPerTick(const UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMillisecondsPerTick(const UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintCallable)
    float GetEstimatedRunTime(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    float GetDurationOfQuantizationTypeInSeconds(const UObject* WorldContextObject, const EQuartzCommandQuantization& QuantizationType, float Multiplier);
    
    UFUNCTION(BlueprintCallable)
    FQuartzTransportTimeStamp GetCurrentTimestamp(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBeatsPerMinute(const UObject* WorldContextObject) const;
    
};

