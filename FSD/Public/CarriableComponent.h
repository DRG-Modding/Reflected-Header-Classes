#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Throwable.h"
#include "CarriableEventDelegate.h"
#include "CarriableComponent.generated.h"

class UDialogDataAsset;
class APlayerCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCarriableComponent : public UActorComponent, public IThrowable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCarriableEvent OnPickedUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCarriableEvent OnDropped;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDialogDataAsset> ShoutWhileCarrying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* CarriedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
public:
    UCarriableComponent();
    UFUNCTION(BlueprintCallable)
    bool PickupItem(APlayerCharacter* byCharacter);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DropItem();
    
    UFUNCTION(BlueprintCallable)
    void AttachChanged(bool Attached, const FVector PrevScale);
    
    
    // Fix for true pure virtual functions not being implemented
};

