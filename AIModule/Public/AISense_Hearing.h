#pragma once
#include "CoreMinimal.h"
#include "AISense.h"
#include "AINoiseEvent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AISense_Hearing.generated.h"

class UObject;
class AActor;

UCLASS(Config=Game)
class AIMODULE_API UAISense_Hearing : public UAISense {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FAINoiseEvent> NoiseEvents;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    float SpeedOfSoundSq;
    
public:
    UAISense_Hearing();
    UFUNCTION(BlueprintCallable)
    static void ReportNoiseEvent(UObject* WorldContextObject, FVector NoiseLocation, float Loudness, AActor* Instigator, float MaxRange, FName Tag);
    
};

