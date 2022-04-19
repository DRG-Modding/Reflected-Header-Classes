#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "LandscapeComponentMaterialOverride.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "WeightmapLayerAllocationInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "LandscapeComponent.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMaterialInstanceConstant;
class UTexture2D;
class ULandscapeLODStreamingProxy;
class ULandscapeHeightfieldCollisionComponent;
class ULandscapeLayerInfoObject;

UCLASS(MinimalAPI, Within=LandscapeProxy, meta=(BlueprintSpawnableComponent))
class ULandscapeComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionBaseX;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionBaseY;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 ComponentSizeQuads;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 SubsectionSizeQuads;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 NumSubsections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OverrideMaterial;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OverrideHoleMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLandscapeComponentMaterialOverride> OverrideMaterials;
    
    UPROPERTY(BlueprintReadWrite, TextExportTransient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceConstant*> MaterialInstances;
    
    UPROPERTY(BlueprintReadWrite, TextExportTransient, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MaterialInstancesDynamic;
    
    UPROPERTY(BlueprintReadWrite, TextExportTransient, meta=(AllowPrivateAccess=true))
    TArray<int8> LODIndexToMaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, TextExportTransient, meta=(AllowPrivateAccess=true))
    TArray<int8> MaterialIndexToDisabledTessellationMaterial;
    
    UPROPERTY(BlueprintReadWrite, TextExportTransient, meta=(AllowPrivateAccess=true))
    UTexture2D* XYOffsetmapTexture;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector4 WeightmapScaleBias;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float WeightmapSubsectionOffset;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector4 HeightmapScaleBias;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FBox CachedLocalBox;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    TLazyObjectPtr<ULandscapeHeightfieldCollisionComponent> CollisionComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, TextExportTransient, meta=(AllowPrivateAccess=true))
    UTexture2D* HeightmapTexture;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FWeightmapLayerAllocationInfo> WeightmapLayerAllocations;
    
    UPROPERTY(BlueprintReadWrite, TextExportTransient, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> WeightmapTextures;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ULandscapeLODStreamingProxy* LODStreamingProxy;
    
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid MapBuildDataId;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FGuid> IrrelevantLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollisionMipLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SimpleCollisionMipLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NegativeZBoundsExtension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PositiveZBoundsExtension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaticLightingResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForcedLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LODBias;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid StateId;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid BakedTextureMaterialGuid;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* GIBakedBaseColorTexture;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 MobileBlendableLayerMask;
    
    UPROPERTY(BlueprintReadWrite, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MobileMaterialInterface;
    
    UPROPERTY(BlueprintReadWrite, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> MobileMaterialInterfaces;
    
    UPROPERTY(BlueprintReadWrite, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> MobileWeightmapTextures;
    
    ULandscapeComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable)
    float EditorGetPaintLayerWeightByNameAtLocation(const FVector& InLocation, const FName InPaintLayerName);
    
    UFUNCTION(BlueprintCallable)
    float EditorGetPaintLayerWeightAtLocation(const FVector& InLocation, ULandscapeLayerInfoObject* PaintLayer);
    
};

