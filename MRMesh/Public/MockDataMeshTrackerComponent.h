#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Color
//CROSS-MODULE INCLUDE: Engine SceneComponent
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "EMeshTrackerVertexColorMode.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "MockDataMeshTrackerComponent.generated.h"

class UMRMeshComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FMockDataMeshTrackerComponentOnMeshTrackerUpdated, int32, Index, const TArray<FVector>&, Vertices, const TArray<int32>&, Triangles, const TArray<FVector>&, Normals, const TArray<float>&, Confidence);

UCLASS(BlueprintType, EditInlineNew)
class MRMESH_API UMockDataMeshTrackerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMockDataMeshTrackerComponentOnMeshTrackerUpdated OnMeshTrackerUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ScanWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RequestNormals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RequestVertexConfidence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMeshTrackerVertexColorMode VertexColorMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FColor> BlockVertexColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor VertexColorFromConfidenceZero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor VertexColorFromConfidenceOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UpdateInterval;
    
    UPROPERTY(Export, Transient)
    UMRMeshComponent* MRMesh;
    
    UFUNCTION(BlueprintCallable)
    void DisconnectMRMesh(UMRMeshComponent* InMRMeshPtr);
    
    UFUNCTION(BlueprintCallable)
    void ConnectMRMesh(UMRMeshComponent* InMRMeshPtr);
    
    UMockDataMeshTrackerComponent();
};

