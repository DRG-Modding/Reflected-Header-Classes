#pragma once
#include "CoreMinimal.h"
#include "ClothVertBoneData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ClothPhysicalMeshDataBase_Legacy.generated.h"

UCLASS(Blueprintable)
class CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClothPhysicalMeshDataBase_Legacy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Vertices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Normals;
    
    UPROPERTY(EditAnywhere)
    TArray<uint32> Indices;
    
    UPROPERTY(EditAnywhere)
    TArray<float> InverseMasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClothVertBoneData> BoneData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumFixedVerts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBoneWeights;
    
    UPROPERTY(EditAnywhere)
    TArray<uint32> SelfCollisionIndices;
    
    UClothPhysicalMeshDataBase_Legacy();
};

