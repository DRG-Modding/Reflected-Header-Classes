#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "ReplicatedCharacterData.h"
#include "CharacterSightComponent.generated.h"

class AActor;
class UPrimitiveComponent;
class APlayerCharacter;
class USimpleObjectInfoComponent;
class UTemperatureComponent;
class UPawnAfflictionComponent;
class UHealth;
class IHealth;
class UTargetable;
class ITargetable;
class UCharacterSightSensorBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCharacterSightComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTargetChangedSignature, AActor*, NewTarget, UPrimitiveComponent*, NewPrimitive);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTargetChangedSignature OnTargetChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetMaxDistance;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<AActor>> IgnoredActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UPrimitiveComponent> TargetPrimitive;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<USimpleObjectInfoComponent> TargetInfo;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UTemperatureComponent> TargetTemperature;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UPawnAfflictionComponent> TargetAfflictions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IHealth> TargetHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<ITargetable> TargetTargetable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TargetTime;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<TWeakObjectPtr<UCharacterSightSensorBase>> TargetSensors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FReplicatedCharacterData ReplicatedData;
    
public:
    UCharacterSightComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_UpdateTarget(AActor* NewActor, UPrimitiveComponent* NewPrimitive);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveIgnoreActor(AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSightStartAndEnd(float InMaxDistance, FVector& OutStartLocation, FVector& OutEndLocation) const;
    
    UFUNCTION(BlueprintCallable)
    void AddIgnoreActor(AActor* InActor);
    
};

