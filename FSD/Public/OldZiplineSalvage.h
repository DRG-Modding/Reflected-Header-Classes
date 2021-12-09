#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "OldZiplineSalvage.generated.h"

class AZipLineProjectile;

UCLASS()
class FSD_API AOldZiplineSalvage : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AZipLineProjectile> ZiplineProjectileClass;
    
protected:
    UPROPERTY(EditAnywhere)
    FVector RelativeDestinationLocation;
    
    UFUNCTION()
    void OnMatchStarted();
    
public:
    AOldZiplineSalvage();
};

