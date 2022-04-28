#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ComponentTrackingActivatedSignatureDelegate.h"
#include "ComponentTrackingDeactivatedSignatureDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SteamVRTrackingReferences.generated.h"

class UStaticMeshComponent;
class UStaticMesh;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STEAMVRINPUTDEVICE_API USteamVRTrackingReferences : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentTrackingActivatedSignature OnTrackedDeviceActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentTrackingDeactivatedSignature OnTrackedDeviceDeactivated;
    
    UPROPERTY(EditAnywhere)
    float ActiveDevicePollFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TrackingReferenceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> TrackingReferences;
    
    USteamVRTrackingReferences();
    UFUNCTION(BlueprintCallable)
    bool ShowTrackingReferences(UStaticMesh* TrackingReferenceMesh);
    
    UFUNCTION(BlueprintCallable)
    void HideTrackingReferences();
    
};

