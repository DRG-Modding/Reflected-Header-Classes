#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "ShowroomController.generated.h"

class AActor;
class AShowroomStage;

UCLASS(Abstract, BlueprintType)
class UShowroomController : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    AShowroomStage* Stage;
    
    UFUNCTION(BlueprintCallable)
    void SetLightChannels(AActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable)
    void RotateShowroom(float Pitch, float Yaw);
    
    UFUNCTION(BlueprintCallable)
    void ResetShowroomRotation();
    
    UFUNCTION(BlueprintCallable)
    FRotator GetShowroomRotation();
    
    UShowroomController();
};

