#pragma once
#include "CoreMinimal.h"
#include "PushPoint.generated.h"

class APlayerCharacter;
class USphereComponent;

USTRUCT()
struct FPushPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* collider;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
    FSD_API FPushPoint();
};

