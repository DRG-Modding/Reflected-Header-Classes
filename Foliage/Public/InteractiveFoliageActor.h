#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshActor -FallbackName=StaticMeshActor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "InteractiveFoliageActor.generated.h"

class UCapsuleComponent;
class UPrimitiveComponent;
class AActor;

UCLASS(MinimalAPI)
class AInteractiveFoliageActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector TouchingActorEntryPosition;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector FoliageVelocity;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector FoliageForce;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector FoliagePosition;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FoliageDamageImpulseScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FoliageTouchImpulseScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FoliageStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FoliageStiffnessQuadratic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FoliageDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDamageImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTouchImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxForce;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float Mass;
    
    AInteractiveFoliageActor();
protected:
    UFUNCTION(BlueprintCallable)
    void CapsuleTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo);
    
};

