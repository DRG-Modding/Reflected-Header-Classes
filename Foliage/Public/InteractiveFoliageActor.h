#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine StaticMeshActor
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine HitResult
#include "InteractiveFoliageActor.generated.h"

class UCapsuleComponent;
class UPrimitiveComponent;
class AActor;

UCLASS(MinimalAPI)
class AInteractiveFoliageActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(Transient)
    FVector TouchingActorEntryPosition;
    
    UPROPERTY(Transient)
    FVector FoliageVelocity;
    
    UPROPERTY(Transient)
    FVector FoliageForce;
    
    UPROPERTY(Transient)
    FVector FoliagePosition;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FoliageDamageImpulseScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FoliageTouchImpulseScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FoliageStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FoliageStiffnessQuadratic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FoliageDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxDamageImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxTouchImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxForce;
    
    UPROPERTY()
    float Mass;
    
protected:
    UFUNCTION()
    void CapsuleTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo);
    
public:
    AInteractiveFoliageActor();
};

