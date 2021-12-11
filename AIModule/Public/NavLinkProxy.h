#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: Engine NavRelevantInterface
//CROSS-MODULE INCLUDE: NavigationSystem NavLinkHostInterface
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine NavigationLink
//CROSS-MODULE INCLUDE: Engine NavigationSegmentLink
#include "NavLinkProxy.generated.h"

class UNavLinkCustomComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNavLinkProxyOnSmartLinkReached, AActor*, MovingActor, const FVector&, DestinationPoint);

UCLASS()
class AIMODULE_API ANavLinkProxy : public AActor, public INavLinkHostInterface, public INavRelevantInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FNavigationLink> PointLinks;
    
    UPROPERTY()
    TArray<FNavigationSegmentLink> SegmentLinks;
    
private:
    UPROPERTY(Export, VisibleAnywhere)
    UNavLinkCustomComponent* SmartLinkComp;
    
public:
    UPROPERTY(EditAnywhere)
    bool bSmartLinkIsRelevant;
    
protected:
    UPROPERTY(BlueprintAssignable)
    FNavLinkProxyOnSmartLinkReached OnSmartLinkReached;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSmartLinkEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void ResumePathFollowing(AActor* Agent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSmartLinkReached(AActor* Agent, const FVector& Destination);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSmartLinkEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMovingAgents() const;
    
    ANavLinkProxy();
    
    // Fix for true pure virtual functions not being implemented
};

