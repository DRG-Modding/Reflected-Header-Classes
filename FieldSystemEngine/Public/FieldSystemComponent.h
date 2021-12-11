#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine PrimitiveComponent
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: FieldSystemCore EFieldPhysicsType
#include "FieldSystemComponent.generated.h"

class AChaosSolverActor;
class UFieldSystem;
class UFieldNodeBase;
class UFieldSystemMetaData;

UCLASS()
class FIELDSYSTEMENGINE_API UFieldSystemComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFieldSystem* FieldSystem;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers;
    
    UFUNCTION(BlueprintCallable)
    void ResetFieldSystem();
    
    UFUNCTION(BlueprintCallable)
    void ApplyUniformVectorFalloffForce(bool Enabled, FVector Position, FVector Direction, float Radius, float Magnitude);
    
    UFUNCTION(BlueprintCallable)
    void ApplyStrainField(bool Enabled, FVector Position, float Radius, float Magnitude, int32 Iterations);
    
    UFUNCTION(BlueprintCallable)
    void ApplyStayDynamicField(bool Enabled, FVector Position, float Radius);
    
    UFUNCTION(BlueprintCallable)
    void ApplyRadialVectorFalloffForce(bool Enabled, FVector Position, float Radius, float Magnitude);
    
    UFUNCTION(BlueprintCallable)
    void ApplyRadialForce(bool Enabled, FVector Position, float Magnitude);
    
    UFUNCTION(BlueprintCallable)
    void ApplyPhysicsField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field);
    
    UFUNCTION(BlueprintCallable)
    void ApplyLinearForce(bool Enabled, FVector Direction, float Magnitude);
    
    UFUNCTION(BlueprintCallable)
    void AddFieldCommand(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field);
    
    UFieldSystemComponent();
};

