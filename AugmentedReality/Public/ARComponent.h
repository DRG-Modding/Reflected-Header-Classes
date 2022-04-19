#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ARComponent.generated.h"

class UMaterialInterface;
class UMRMeshComponent;
class UARTrackedGeometry;

UCLASS(Abstract, Blueprintable, meta=(BlueprintSpawnableComponent))
class AUGMENTEDREALITY_API UARComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
    FGuid NativeID;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDefaultReplication;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DefaultMeshMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DefaultWireframeMeshMaterial;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UMRMeshComponent* MRMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UARTrackedGeometry* MyTrackedGeometry;
    
public:
    UARComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateVisualization();
    
    UFUNCTION(BlueprintCallable)
    void SetNativeID(FGuid NewNativeID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveRemove();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Payload();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMRMeshComponent* GetMRMesh();
    
};

