#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "CarriableItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EInputKeys.h"
#include "BasicThrowableItem.generated.h"

class UStaticMeshComponent;
class UBoxComponent;
class UFirstPersonStaticMeshComponent;
class USphereComponent;
class USoundCue;
class UCarriableComponent;
class UInstantUsable;
class APlayerCharacter;
class UPrimitiveComponent;
class AActor;

UCLASS(Abstract, Blueprintable)
class ABasicThrowableItem : public ACarriableItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* UseSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCarriableComponent* CarriableComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UInstantUsable* UsableComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* WorldMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UFirstPersonStaticMeshComponent* ViewMeshComp;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ImpactSound;
    
    UPROPERTY(EditAnywhere)
    float SquaredMinImpactForce;
    
    UPROPERTY(EditAnywhere)
    float ImpactAudioResetTime;
    
    UPROPERTY(EditAnywhere)
    float SquaredMinThrowforce;
    
public:
    ABasicThrowableItem();
    UFUNCTION(BlueprintCallable)
    void ThrowItem(const FVector& throwForce);
    
private:
    UFUNCTION(BlueprintCallable)
    void ResetImpactSound();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnUsed(APlayerCharacter* User, EInputKeys Key);
    
    UFUNCTION(BlueprintCallable)
    void OnUsableChanged(bool CanUse);
    
    UFUNCTION(BlueprintCallable)
    void OnPickedUp();
    
    UFUNCTION(BlueprintCallable)
    void OnDropped();
    
    UFUNCTION(BlueprintCallable)
    void OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
};

