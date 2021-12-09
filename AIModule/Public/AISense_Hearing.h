#pragma once
#include "CoreMinimal.h"
#include "AISense.h"
#include "AINoiseEvent.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "AISense_Hearing.generated.h"

class AActor;
class UObject;

UCLASS(Config=Game)
class AIMODULE_API UAISense_Hearing : public UAISense {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FAINoiseEvent> NoiseEvents;
    
    UPROPERTY(Config)
    float SpeedOfSoundSq;
    
public:
    UFUNCTION(BlueprintCallable)
    static void ReportNoiseEvent(UObject* WorldContextObject, FVector NoiseLocation, float Loudness, AActor* Instigator, float MaxRange, FName Tag);
    
    UAISense_Hearing();
};

