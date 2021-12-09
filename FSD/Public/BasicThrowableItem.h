#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine HitResult
#include "CarriableItem.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "EInputKeys.h"
#include "BasicThrowableItem.generated.h"

class UPrimitiveComponent;
class UFirstPersonStaticMeshComponent;
class USphereComponent;
class UCarriableComponent;
class UBoxComponent;
class USoundCue;
class UInstantUsable;
class UStaticMeshComponent;
class APlayerCharacter;
class AActor;

UCLASS(Abstract)
class ABasicThrowableItem : public ACarriableItem {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    UBoxComponent* BoxComp;
    
    UPROPERTY(Export, VisibleAnywhere)
    USphereComponent* UseSphere;
    
    UPROPERTY(Export, VisibleAnywhere)
    UCarriableComponent* CarriableComp;
    
    UPROPERTY(Export, VisibleAnywhere)
    UInstantUsable* UsableComp;
    
    UPROPERTY(Export, VisibleAnywhere)
    UStaticMeshComponent* WorldMeshComp;
    
    UPROPERTY(Export, VisibleAnywhere)
    UFirstPersonStaticMeshComponent* ViewMeshComp;
    
protected:
    UPROPERTY(EditAnywhere)
    USoundCue* ImpactSound;
    
    UPROPERTY(EditAnywhere)
    float SquaredMinImpactForce;
    
    UPROPERTY(EditAnywhere)
    float ImpactAudioResetTime;
    
    UPROPERTY(EditAnywhere)
    float SquaredMinThrowforce;
    
public:
    UFUNCTION(BlueprintCallable)
    void ThrowItem(const FVector& throwForce);
    
private:
    UFUNCTION()
    void ResetImpactSound();
    
public:
    UFUNCTION()
    void OnUsed(APlayerCharacter* User, EInputKeys Key);
    
    UFUNCTION()
    void OnUsableChanged(bool CanUse);
    
    UFUNCTION()
    void OnPickedUp();
    
    UFUNCTION()
    void OnDropped();
    
    UFUNCTION()
    void OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    ABasicThrowableItem();
};

