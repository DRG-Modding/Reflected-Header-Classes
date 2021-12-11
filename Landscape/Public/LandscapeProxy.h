#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "LandscapeProxyMaterialOverride.h"
//CROSS-MODULE INCLUDE: CoreUObject IntPoint
#include "ELandscapeLODFalloff.h"
//CROSS-MODULE INCLUDE: Engine ERuntimeVirtualTextureMainPassType
//CROSS-MODULE INCLUDE: Engine LightingChannels
//CROSS-MODULE INCLUDE: Engine LightmassPrimitiveSettings
//CROSS-MODULE INCLUDE: Engine BodyInstance
//CROSS-MODULE INCLUDE: Engine ENavDataGatheringMode
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "LandscapeProxy.generated.h"

class UMaterialInterface;
class ULandscapeSplinesComponent;
class UTexture;
class UPhysicalMaterial;
class URuntimeVirtualTexture;
class ULandscapeComponent;
class ULandscapeHeightfieldCollisionComponent;
class UHierarchicalInstancedStaticMeshComponent;
class UTexture2D;
class ULandscapeWeightmapUsage;
class USplineComponent;
class ULandscapeLayerInfoObject;

UCLASS(Abstract, MinimalAPI)
class ALandscapeProxy : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    ULandscapeSplinesComponent* SplineComponent;
    
protected:
    UPROPERTY()
    FGuid LandscapeGuid;
    
public:
    UPROPERTY()
    FIntPoint LandscapeSectionOffset;
    
    UPROPERTY(EditAnywhere)
    int32 MaxLODLevel;
    
    UPROPERTY()
    float LODDistanceFactor;
    
    UPROPERTY()
    TEnumAsByte<ELandscapeLODFalloff::Type> LODFalloff;
    
    UPROPERTY(EditAnywhere)
    float ComponentScreenSizeToUseSubSections;
    
    UPROPERTY(EditAnywhere)
    float LOD0ScreenSize;
    
    UPROPERTY(EditAnywhere)
    float LOD0DistributionSetting;
    
    UPROPERTY(EditAnywhere)
    float LODDistributionSetting;
    
    UPROPERTY(EditAnywhere)
    float TessellationComponentScreenSize;
    
    UPROPERTY(EditAnywhere)
    bool UseTessellationComponentScreenSizeFalloff;
    
    UPROPERTY(EditAnywhere)
    float TessellationComponentScreenSizeFalloff;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 OccluderGeometryLOD;
    
    UPROPERTY(EditAnywhere)
    int32 StaticLightingLOD;
    
    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* DefaultPhysMaterial;
    
    UPROPERTY(EditAnywhere)
    float StreamingDistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* LandscapeMaterial;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    UMaterialInterface* LandscapeHoleMaterial;
    
    UPROPERTY(EditAnywhere)
    TArray<FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool bMeshHoles;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 MeshHolesMaxLod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    int32 VirtualTextureNumLods;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    int32 VirtualTextureLodBias;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;
    
    UPROPERTY(EditAnywhere)
    float NegativeZBoundsExtension;
    
    UPROPERTY(EditAnywhere)
    float PositiveZBoundsExtension;
    
    UPROPERTY(Export)
    TArray<ULandscapeComponent*> LandscapeComponents;
    
    UPROPERTY(Export)
    TArray<ULandscapeHeightfieldCollisionComponent*> CollisionComponents;
    
    UPROPERTY(DuplicateTransient, Export, Transient)
    TArray<UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;
    
    UPROPERTY()
    bool bHasLandscapeGrass;
    
    UPROPERTY(EditAnywhere)
    float StaticLightingResolution;
    
    UPROPERTY(EditAnywhere)
    uint8 bCastStaticShadow: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bCastShadowAsTwoSided: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bCastFarShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bAffectDistanceFieldLighting: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FLightingChannels LightingChannels;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bUseMaterialPositionOffsetInStaticLighting: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bRenderCustomDepth: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    int32 CustomDepthStencilValue;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float LDMaxDrawDistance;
    
    UPROPERTY(EditAnywhere)
    FLightmassPrimitiveSettings LightmassSettings;
    
    UPROPERTY(EditAnywhere)
    int32 CollisionMipLevel;
    
    UPROPERTY(EditAnywhere)
    int32 SimpleCollisionMipLevel;
    
    UPROPERTY(EditAnywhere)
    float CollisionThickness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FBodyInstance BodyInstance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bGenerateOverlapEvents: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bBakeMaterialPositionOffsetIntoCollision: 1;
    
    UPROPERTY()
    int32 ComponentSizeQuads;
    
    UPROPERTY()
    int32 SubsectionSizeQuads;
    
    UPROPERTY()
    int32 NumSubsections;
    
    UPROPERTY(EditAnywhere)
    uint8 bUsedForNavigation: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bFillCollisionUnderLandscapeForNavmesh: 1;
    
    UPROPERTY(EditAnywhere)
    bool bUseDynamicMaterialInstance;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    ENavDataGatheringMode NavigationGeometryGatheringMode;
    
    UPROPERTY(EditAnywhere)
    bool bUseLandscapeForCullingInvisibleHLODVertices;
    
    UPROPERTY()
    bool bHasLayersContent;
    
    UPROPERTY(Transient)
    TMap<UTexture2D*, ULandscapeWeightmapUsage*> WeightmapUsageMap;
    
    UFUNCTION(BlueprintCallable)
    void SetLandscapeMaterialVectorParameterValue(FName ParameterName, FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetLandscapeMaterialTextureParameterValue(FName ParameterName, UTexture* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetLandscapeMaterialScalarParameterValue(FName ParameterName, float Value);
    
    UFUNCTION(BlueprintCallable)
    void EditorSetLandscapeMaterial(UMaterialInterface* NewLandscapeMaterial);
    
    UFUNCTION(BlueprintCallable)
    void EditorApplySpline(USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32 NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, ULandscapeLayerInfoObject* PaintLayer);
    
    UFUNCTION(BlueprintCallable)
    void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections);
    
    UFUNCTION(BlueprintCallable)
    void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff);
    
    UFUNCTION(BlueprintCallable)
    void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize);
    
    UFUNCTION(BlueprintCallable)
    void ChangeLODDistanceFactor(float InLODDistanceFactor);
    
    UFUNCTION(BlueprintCallable)
    void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);
    
    ALandscapeProxy();
};

