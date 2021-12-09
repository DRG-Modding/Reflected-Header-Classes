#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
//CROSS-MODULE INCLUDE: CoreUObject FrameRate
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE: CoreUObject FrameTime
//CROSS-MODULE INCLUDE: CoreUObject Timecode
//CROSS-MODULE INCLUDE: CoreUObject QualifiedFrameTime
#include "TimeManagementBlueprintLibrary.generated.h"

UCLASS(BlueprintType)
class TIMEMANAGEMENT_API UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static FFrameTime TransformTime(const FFrameTime& SourceTime, const FFrameRate& SourceRate, const FFrameRate& DestinationRate);
    
    UFUNCTION(BlueprintPure)
    static FFrameNumber Subtract_FrameNumberInteger(FFrameNumber A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static FFrameNumber Subtract_FrameNumberFrameNumber(FFrameNumber A, FFrameNumber B);
    
    UFUNCTION(BlueprintPure)
    static FFrameTime SnapFrameTimeToRate(const FFrameTime& SourceTime, const FFrameRate& SourceRate, const FFrameRate& SnapToRate);
    
    UFUNCTION(BlueprintPure)
    static FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, const FFrameRate& FrameRate);
    
    UFUNCTION(BlueprintPure)
    static FFrameNumber Multiply_FrameNumberInteger(FFrameNumber A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static bool IsValid_MultipleOf(const FFrameRate& InFrameRate, const FFrameRate& OtherFramerate);
    
    UFUNCTION(BlueprintPure)
    static bool IsValid_Framerate(const FFrameRate& InFrameRate);
    
    UFUNCTION(BlueprintPure)
    static FFrameRate GetTimecodeFrameRate();
    
    UFUNCTION(BlueprintPure)
    static FTimecode GetTimecode();
    
    UFUNCTION(BlueprintPure)
    static FFrameNumber Divide_FrameNumberInteger(FFrameNumber A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_TimecodeToString(const FTimecode& InTimecode, bool bForceSignDisplay);
    
    UFUNCTION(BlueprintPure)
    static float Conv_QualifiedFrameTimeToSeconds(const FQualifiedFrameTime& InFrameTime);
    
    UFUNCTION(BlueprintPure)
    static float Conv_FrameRateToSeconds(const FFrameRate& InFrameRate);
    
    UFUNCTION(BlueprintPure)
    static int32 Conv_FrameNumberToInteger(const FFrameNumber& InFrameNumber);
    
    UFUNCTION(BlueprintPure)
    static FFrameNumber Add_FrameNumberInteger(FFrameNumber A, int32 B);
    
    UFUNCTION(BlueprintPure)
    static FFrameNumber Add_FrameNumberFrameNumber(FFrameNumber A, FFrameNumber B);
    
    UTimeManagementBlueprintLibrary();
};

