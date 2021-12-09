#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SceneComponent
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ObstructionChecker.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObstructionCheckerOnObstructionChangedEvent, float, Distance);

UCLASS(BlueprintType)
class UObstructionChecker : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FObstructionCheckerOnObstructionChangedEvent OnObstructionChangedEvent;
    
protected:
    UPROPERTY(EditAnywhere)
    float DistanceToCheck;
    
    UPROPERTY(EditAnywhere)
    float CheckInterval;
    
    UPROPERTY(EditAnywhere)
    TArray<FVector> RayOffsets;
    
    UFUNCTION()
    void Timer_Tick();
    
    UFUNCTION()
    void Timer_Result();
    
public:
    UFUNCTION(BlueprintCallable)
    void CheckForObstructions();
    
    UObstructionChecker();
};

