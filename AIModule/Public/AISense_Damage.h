#pragma once
#include "CoreMinimal.h"
#include "AISense.h"
#include "AIDamageEvent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AISense_Damage.generated.h"

class UObject;
class AActor;

UCLASS(Blueprintable)
class AIMODULE_API UAISense_Damage : public UAISense {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIDamageEvent> RegisteredEvents;
    
    UAISense_Damage();
    UFUNCTION(BlueprintCallable)
    static void ReportDamageEvent(UObject* WorldContextObject, AActor* DamagedActor, AActor* Instigator, float damageAmount, FVector EventLocation, FVector HitLocation, FName Tag);
    
};

