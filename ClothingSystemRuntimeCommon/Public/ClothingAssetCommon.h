#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: ClothingSystemRuntimeInterface ClothingAssetBase
#include "ClothConfig_Legacy.h"
#include "ClothLODDataCommon.h"
#include "ClothingAssetCommon.generated.h"

class UPhysicsAsset;
class UClothConfigBase;
class UClothLODDataCommon_Legacy;
class UClothingAssetCustomData;

UCLASS(BlueprintType)
class CLOTHINGSYSTEMRUNTIMECOMMON_API UClothingAssetCommon : public UClothingAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UPhysicsAsset* PhysicsAsset;
    
    UPROPERTY(BlueprintReadOnly, EditFixedSize, Export, VisibleAnywhere)
    TMap<FName, UClothConfigBase*> ClothConfigs;
    
    UPROPERTY()
    UClothConfigBase* ClothSharedSimConfig;
    
    UPROPERTY()
    UClothConfigBase* ClothSimConfig;
    
    UPROPERTY()
    UClothConfigBase* ChaosClothSimConfig;
    
    UPROPERTY()
    TArray<UClothLODDataCommon_Legacy*> ClothLODData;
    
    UPROPERTY()
    TArray<FClothLODDataCommon> LODData;
    
    UPROPERTY()
    TArray<int32> LodMap;
    
    UPROPERTY()
    TArray<FName> UsedBoneNames;
    
    UPROPERTY()
    TArray<int32> UsedBoneIndices;
    
    UPROPERTY()
    int32 ReferenceBoneIndex;
    
    UPROPERTY()
    UClothingAssetCustomData* CustomData;
    
    UPROPERTY()
    FClothConfig_Legacy ClothConfig;
    
    UClothingAssetCommon();
};

