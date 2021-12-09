#pragma once
#include "CoreMinimal.h"
#include "DeepCSGFloatTree.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
//CROSS-MODULE INCLUDE: CoreUObject Box
#include "DeepCSGFloatTreePacked.h"
#include "StaticMeshCarver.generated.h"

class UStaticMesh;

UCLASS(BlueprintType, MinimalAPI)
class UStaticMeshCarver : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString Status;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UStaticMesh> Mesh;
    
    UPROPERTY(VisibleAnywhere)
    FBox AABB;
    
    UPROPERTY()
    FDeepCSGFloatTree BSPTree;
    
    UPROPERTY()
    FDeepCSGFloatTreePacked BSPTreePacked;
    
    UFUNCTION(BlueprintCallable)
    void Generate();
    
    UFUNCTION(BlueprintCallable)
    void ExportPreviewMesh();
    
    UStaticMeshCarver();
};
