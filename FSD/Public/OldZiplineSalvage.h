#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OldZiplineSalvage.generated.h"

class AZipLineProjectile;

UCLASS(Blueprintable)
class FSD_API AOldZiplineSalvage : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AZipLineProjectile> ZiplineProjectileClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativeDestinationLocation;
    
public:
    AOldZiplineSalvage();
protected:
    UFUNCTION(BlueprintCallable)
    void OnMatchStarted();
    
};

