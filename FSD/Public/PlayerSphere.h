#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PlayerSphere.generated.h"

class APlayerCharacter;

USTRUCT(BlueprintType)
struct FPlayerSphere {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector Center;
    
    UPROPERTY(EditAnywhere, Transient)
    float Radius;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<APlayerCharacter>> Players;
    
    FSD_API FPlayerSphere();
};

