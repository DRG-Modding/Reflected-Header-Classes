#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "FieldObjectCommands.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EFieldPhysicsType -FallbackName=EFieldPhysicsType
#include "FieldSystemComponent.generated.h"

class UFieldSystem;
class AChaosSolverActor;
class UFieldSystemMetaData;
class UFieldNodeBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UFieldSystemComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFieldSystem* FieldSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWorldField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsChaosField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldObjectCommands ConstructionCommands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFieldObjectCommands BufferCommands;
    
    UFieldSystemComponent();
    UFUNCTION(BlueprintCallable)
    void ResetFieldSystem();
    
    UFUNCTION(BlueprintCallable)
    void RemovePersistentFields();
    
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
    void AddPersistentField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field);
    
    UFUNCTION(BlueprintCallable)
    void AddFieldCommand(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field);
    
};

