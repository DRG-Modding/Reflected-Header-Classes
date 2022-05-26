#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "TrackBuilderConnectPoint.generated.h"

class UTrackBuilderConnectPoint;
class ATrackBuilderSegment;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UTrackBuilderConnectPoint : public USphereComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FConnectionDelegate, UTrackBuilderConnectPoint*, InConnectPoint, ATrackBuilderSegment*, InSegment);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConnectionDelegate OnConnectedWithSegment;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATrackBuilderSegment> ConnectType;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_ConnectedSegment)
    TWeakObjectPtr<ATrackBuilderSegment> ConnectedSegment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxConnectRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConnectDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MaxAngles;
    
public:
    UTrackBuilderConnectPoint();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ConnectedSegment();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FTransform GetConnectTransform(const FTransform& FromWorldTransform);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool Disconnect(ATrackBuilderSegment* InSegment);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool Connect(ATrackBuilderSegment* InSegment);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanConnectWith(ATrackBuilderSegment* InSegment, const FTransform& FromWorldTransform);
    
};

