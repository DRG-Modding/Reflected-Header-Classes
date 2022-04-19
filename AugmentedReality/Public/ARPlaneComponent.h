#pragma once
#include "CoreMinimal.h"
#include "ARComponent.h"
#include "ARPlaneUpdatePayload.h"
#include "EPlaneComponentDebugMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "EARObjectClassification.h"
#include "ARPlaneComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class AUGMENTEDREALITY_API UARPlaneComponent : public UARComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_Payload, meta=(AllowPrivateAccess=true))
    FARPlaneUpdatePayload ReplicatedPayload;
    
public:
    UARPlaneComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static void SetPlaneComponentDebugMode(EPlaneComponentDebugMode NewDebugMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetObjectClassificationDebugColors(const TMap<EARObjectClassification, FLinearColor>& InColors);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdatePayload(const FARPlaneUpdatePayload& NewPayload);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveUpdate(const FARPlaneUpdatePayload& Payload);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveAdd(const FARPlaneUpdatePayload& Payload);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<EARObjectClassification, FLinearColor> GetObjectClassificationDebugColors();
    
};

