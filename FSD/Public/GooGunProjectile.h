#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Projectile.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "GooGunProjectile.generated.h"

class AGooGunPuddle;

UCLASS()
class AGooGunProjectile : public AProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PuddleLifeTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 FragmentCount;
    
    UFUNCTION(BlueprintCallable)
    AGooGunPuddle* SpawnPuddle(FTransform Transform, TSubclassOf<AGooGunPuddle> PuddleClass);
    
public:
    AGooGunProjectile();
};

