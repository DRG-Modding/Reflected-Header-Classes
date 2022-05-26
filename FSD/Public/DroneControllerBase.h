#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
#include "LaserPointerTarget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "DroneControllerBase.generated.h"

class ADroneBase;
class APlayerCharacter;
class AActor;

UCLASS(Blueprintable)
class ADroneControllerBase : public AAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APlayerCharacter*> ControllingPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADroneBase* ControlledDrone;
    
    ADroneControllerBase();
    UFUNCTION(BlueprintCallable)
    void OnShout(APlayerCharacter* ShoutingPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnSecondaryLaserPointer(AActor* aTarget, const FVector& aLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnSalute(APlayerCharacter* aCharacater);
    
    UFUNCTION(BlueprintCallable)
    void OnPrimaryLaserpointer(const FLaserPointerTarget& HitInfo);
    
};

