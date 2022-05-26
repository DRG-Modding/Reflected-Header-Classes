#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "LandscapeComponentMaterialOverride.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "WeightmapLayerAllocationInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "LandscapeComponent.generated.h"

class UMaterialInstanceConstant;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTexture2D;
class ULandscapeHeightfieldCollisionComponent;
class ULandscapeLODStreamingProxy;
class ULandscapeLayerInfoObject;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, Within=LandscapeProxy, meta=(BlueprintSpawnableComponent))
class ULandscapeComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionBaseX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionBaseY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ComponentSizeQuads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubsectionSizeQuads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSubsections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OverrideMaterial;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OverrideHoleMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLandscapeComponentMaterialOverride> OverrideMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, TextExportTransient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceConstant*> MaterialInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, TextExportTransient, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MaterialInstancesDynamic;
    
    UPROPERTY(EditAnywhere, TextExportTransient)
    TArray<int8> LODIndexToMaterialIndex;
    
    UPROPERTY(EditAnywhere, TextExportTransient)
    TArray<int8> MaterialIndexToDisabledTessellationMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, TextExportTransient, meta=(AllowPrivateAccess=true))
    UTexture2D* XYOffsetmapTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 WeightmapScaleBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeightmapSubsectionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 HeightmapScaleBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox CachedLocalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TLazyObjectPtr<ULandscapeHeightfieldCollisionComponent> CollisionComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, TextExportTransient, meta=(AllowPrivateAccess=true))
    UTexture2D* HeightmapTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightmapLayerAllocationInfo> WeightmapLayerAllocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, TextExportTransient, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> WeightmapTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULandscapeLODStreamingProxy* LODStreamingProxy;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid MapBuildDataId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid StateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid BakedTextureMaterialGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* GIBakedBaseColorTexture;
    
    UPROPERTY(EditAnywhere)
    uint8 MobileBlendableLayerMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MobileMaterialInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> MobileMaterialInterfaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> MobileWeightmapTextures;
    
    ULandscapeComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable)
    float EditorGetPaintLayerWeightByNameAtLocation(const FVector& InLocation, const FName InPaintLayerName);
    
    UFUNCTION(BlueprintCallable)
    float EditorGetPaintLayerWeightAtLocation(const FVector& InLocation, ULandscapeLayerInfoObject* PaintLayer);
    
};

