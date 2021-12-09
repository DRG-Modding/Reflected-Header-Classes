#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ClothingSimulationInteractor.generated.h"

UCLASS(Abstract, BlueprintType)
class CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClothingSimulationInteractor : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void SetAnimDriveSpringStiffness(float InStiffness);
    
    UFUNCTION(BlueprintCallable)
    void PhysicsAssetUpdated();
    
    UFUNCTION(BlueprintCallable)
    void EnableGravityOverride(const FVector& InVector);
    
    UFUNCTION(BlueprintCallable)
    void DisableGravityOverride();
    
    UFUNCTION(BlueprintCallable)
    void ClothConfigUpdated();
    
    UClothingSimulationInteractor();
};

