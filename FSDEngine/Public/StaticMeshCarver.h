#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DeepCSGFloatTreePacked.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "DeepCSGFloatTree.h"
#include "StaticMeshCarver.generated.h"

class UStaticMesh;

UCLASS(Blueprintable, MinimalAPI)
class UStaticMeshCarver : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox AABB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeepCSGFloatTree BSPTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeepCSGFloatTreePacked BSPTreePacked;
    
    UStaticMeshCarver();
    UFUNCTION(BlueprintCallable)
    void Generate();
    
    UFUNCTION(BlueprintCallable)
    void ExportPreviewMesh();
    
};

