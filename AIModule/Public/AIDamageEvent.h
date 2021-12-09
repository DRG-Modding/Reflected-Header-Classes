#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "AIDamageEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct AIMODULE_API FAIDamageEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector HitLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* DamagedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Instigator;
    
    FAIDamageEvent();
};

