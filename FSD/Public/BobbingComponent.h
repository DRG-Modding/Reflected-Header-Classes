#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "MovedIntoSomethingDelegate.h"
#include "BobbingComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBobbingComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovedIntoSomething OnMovedIntoSomethingEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* OwnerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoOrientationChecks;
    
    UPROPERTY(EditAnywhere)
    float BobSpeed;
    
    UPROPERTY(EditAnywhere)
    float BobSize;
    
    UPROPERTY(EditAnywhere)
    float OrentationChecksPerSecond;
    
public:
    UBobbingComponent();
    UFUNCTION(BlueprintCallable)
    void SetOwner(AActor* AActor);
    
};

