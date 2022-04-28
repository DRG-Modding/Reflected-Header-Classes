#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshActor -FallbackName=StaticMeshActor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "InteractiveFoliageActor.generated.h"

class UCapsuleComponent;
class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, MinimalAPI)
class AInteractiveFoliageActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector TouchingActorEntryPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector FoliageVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector FoliageForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector FoliagePosition;
    
public:
    UPROPERTY(EditAnywhere)
    float FoliageDamageImpulseScale;
    
    UPROPERTY(EditAnywhere)
    float FoliageTouchImpulseScale;
    
    UPROPERTY(EditAnywhere)
    float FoliageStiffness;
    
    UPROPERTY(EditAnywhere)
    float FoliageStiffnessQuadratic;
    
    UPROPERTY(EditAnywhere)
    float FoliageDamping;
    
    UPROPERTY(EditAnywhere)
    float MaxDamageImpulse;
    
    UPROPERTY(EditAnywhere)
    float MaxTouchImpulse;
    
    UPROPERTY(EditAnywhere)
    float MaxForce;
    
    UPROPERTY(EditAnywhere)
    float Mass;
    
    AInteractiveFoliageActor();
protected:
    UFUNCTION(BlueprintCallable)
    void CapsuleTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo);
    
};

