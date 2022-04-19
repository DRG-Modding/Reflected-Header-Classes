#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ExplosionBaseComponent.generated.h"

class UDamageComponent;
class UPhysicalMaterial;
class UPrimitiveComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UExplosionBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarveDiameterCM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarveNoiseCM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarveBurnThicknessCM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarveNormalOffsetCM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarveNormalSqueeze;
    
public:
    UExplosionBaseComponent();
    UFUNCTION(BlueprintCallable)
    void DamageOnlyFromHit(const FHitResult& HitResult, UPARAM(Ref) UDamageComponent*& DamageComponent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DamageOnly(FVector Location, FName BoneName, UPrimitiveComponent* Target, UPhysicalMaterial* PhysicalMaterial, UPARAM(Ref) UDamageComponent*& DamageComponent);
    
    UFUNCTION(BlueprintCallable)
    void DamageArmorClients(const FHitResult& HitResult, UPARAM(Ref) UDamageComponent*& DamageComponent);
    
    UFUNCTION(BlueprintCallable)
    void DamageAndCarveFromHit(const FHitResult& HitResult, UPARAM(Ref) UDamageComponent*& DamageComponent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DamageAndCarve(FVector Location, FVector ImpactNormal, FName BoneName, UPrimitiveComponent* Target, UPhysicalMaterial* PhysicalMaterial, UPARAM(Ref) UDamageComponent*& DamageComponent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CarveOnly(FVector Location, FVector ImpactNormal);
    
};

