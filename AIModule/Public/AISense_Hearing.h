#pragma once
#include "CoreMinimal.h"
#include "AISense.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AINoiseEvent.h"
#include "AISense_Hearing.generated.h"

class UObject;
class AActor;

UCLASS(Blueprintable, Config=Game)
class AIMODULE_API UAISense_Hearing : public UAISense {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAINoiseEvent> NoiseEvents;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedOfSoundSq;
    
public:
    UAISense_Hearing();
    UFUNCTION(BlueprintCallable)
    static void ReportNoiseEvent(UObject* WorldContextObject, FVector NoiseLocation, float Loudness, AActor* Instigator, float MaxRange, FName Tag);
    
};

