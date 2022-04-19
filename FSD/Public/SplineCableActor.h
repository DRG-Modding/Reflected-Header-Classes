#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CablePathSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "SplineCableActor.generated.h"

class USplineComponent;
class UStaticMesh;
class USplineMeshComponent;
class UMaterialInterface;

UCLASS(Abstract)
class FSD_API ASplineCableActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USplineComponent* PathSplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCablePathSettings PathSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> CableMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CableThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CarveRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> MaterialConnected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> MaterialUnconnected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UStaticMesh* CableMeshInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform StartTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform EndTransform;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_Path, meta=(AllowPrivateAccess=true))
    TArray<FVector> ReplicatedPath;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_Connected, meta=(AllowPrivateAccess=true))
    bool bConnected;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> MeshComponents;
    
public:
    ASplineCableActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnBetweenTransforms(FTransform InStart, FTransform InEnd);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetConnected(bool InConnected);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSegmentCreated(USplineMeshComponent* InSegment, int32 InIndex, int32 InTotal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveAllSegmentsCreated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateMaterials();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Path();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Connected();
    
};

