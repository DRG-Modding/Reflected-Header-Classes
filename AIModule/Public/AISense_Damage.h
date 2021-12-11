#pragma once
#include "CoreMinimal.h"
#include "AISense.h"
#include "AIDamageEvent.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "AISense_Damage.generated.h"

class UObject;
class AActor;

UCLASS()
class AIMODULE_API UAISense_Damage : public UAISense {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FAIDamageEvent> RegisteredEvents;
    
    UFUNCTION(BlueprintCallable)
    static void ReportDamageEvent(UObject* WorldContextObject, AActor* DamagedActor, AActor* Instigator, float damageAmount, FVector EventLocation, FVector HitLocation);
    
    UAISense_Damage();
};

