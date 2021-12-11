#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BodyInstance
//CROSS-MODULE INCLUDE: CoreUObject FloatInterval
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "EFoliageScaling.h"
#include "FoliageVertexColorChannelMask.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "FoliageVertexColorMask.h"
//CROSS-MODULE INCLUDE: CoreUObject BoxSphereBounds
//CROSS-MODULE INCLUDE: Engine EComponentMobility
//CROSS-MODULE INCLUDE: CoreUObject Int32Interval
//CROSS-MODULE INCLUDE: Engine ELightmapType
//CROSS-MODULE INCLUDE: Engine EHasCustomNavigableGeometry
//CROSS-MODULE INCLUDE: Engine LightingChannels
//CROSS-MODULE INCLUDE: Engine RuntimeFloatCurve
//CROSS-MODULE INCLUDE: Engine ERuntimeVirtualTextureMainPassType
#include "FoliageType.generated.h"

class URuntimeVirtualTexture;

UCLASS(BlueprintType, EditInlineNew, MinimalAPI)
class UFoliageType : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid UpdateGuid;
    
    UPROPERTY(EditAnywhere)
    float Density;
    
    UPROPERTY(EditAnywhere)
    float DensityAdjustmentFactor;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    bool bSingleInstanceModeOverrideRadius;
    
    UPROPERTY(EditAnywhere)
    float SingleInstanceModeRadius;
    
    UPROPERTY(EditAnywhere)
    EFoliageScaling Scaling;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval ScaleX;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval ScaleY;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval ScaleZ;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FFoliageVertexColorChannelMask VertexColorMaskByChannel[4];
    
    UPROPERTY()
    TEnumAsByte<FoliageVertexColorMask> VertexColorMask;
    
    UPROPERTY()
    float VertexColorMaskThreshold;
    
    UPROPERTY()
    uint8 VertexColorMaskInvert: 1;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval ZOffset;
    
    UPROPERTY(EditAnywhere)
    uint8 AlignToNormal: 1;
    
    UPROPERTY(EditAnywhere)
    float AlignMaxAngle;
    
    UPROPERTY(EditAnywhere)
    uint8 RandomYaw: 1;
    
    UPROPERTY(EditAnywhere)
    float RandomPitchAngle;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval GroundSlopeAngle;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval Height;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<FName> LandscapeLayers;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float MinimumLayerWeight;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<FName> ExclusionLandscapeLayers;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float MinimumExclusionLayerWeight;
    
    UPROPERTY()
    FName LandscapeLayer;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 CollisionWithWorld: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FVector CollisionScale;
    
    UPROPERTY()
    FBoxSphereBounds MeshBounds;
    
    UPROPERTY()
    FVector LowBoundOriginRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EComponentMobility::Type> Mobility;
    
    UPROPERTY(EditAnywhere)
    FInt32Interval CullDistance;
    
    UPROPERTY()
    uint8 bEnableStaticLighting: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 CastShadow: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bAffectDynamicIndirectLighting: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bAffectDistanceFieldLighting: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bCastDynamicShadow: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bCastStaticShadow: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bCastShadowAsTwoSided: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bReceivesDecals: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bOverrideLightMapRes: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 OverriddenLightMapRes;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    ELightmapType LightmapType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bUseAsOccluder: 1;
    
    UPROPERTY(EditAnywhere)
    FBodyInstance BodyInstance;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EHasCustomNavigableGeometry::Type> CustomNavigableGeometry;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FLightingChannels LightingChannels;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 bRenderCustomDepth: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    int32 CustomDepthStencilValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 TranslucencySortPriority;
    
    UPROPERTY(EditAnywhere)
    float CollisionRadius;
    
    UPROPERTY(EditAnywhere)
    float ShadeRadius;
    
    UPROPERTY(EditAnywhere)
    int32 NumSteps;
    
    UPROPERTY(EditAnywhere)
    float InitialSeedDensity;
    
    UPROPERTY(EditAnywhere)
    float AverageSpreadDistance;
    
    UPROPERTY(EditAnywhere)
    float SpreadVariance;
    
    UPROPERTY(EditAnywhere)
    int32 SeedsPerStep;
    
    UPROPERTY(EditAnywhere)
    int32 DistributionSeed;
    
    UPROPERTY(EditAnywhere)
    float MaxInitialSeedOffset;
    
    UPROPERTY(EditAnywhere)
    bool bCanGrowInShade;
    
    UPROPERTY(EditAnywhere)
    bool bSpawnsInShade;
    
    UPROPERTY(EditAnywhere)
    float MaxInitialAge;
    
    UPROPERTY(EditAnywhere)
    float MaxAge;
    
    UPROPERTY(EditAnywhere)
    float OverlapPriority;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval ProceduralScale;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ScaleCurve;
    
    UPROPERTY(Transient)
    int32 ChangeCount;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 ReapplyDensity: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 ReapplyRadius: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 ReapplyAlignToNormal: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 ReapplyRandomYaw: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 ReapplyScaling: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 ReapplyScaleX: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 ReapplyScaleY: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 ReapplyScaleZ: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 ReapplyRandomPitchAngle: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 ReapplyGroundSlope: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 ReapplyHeight: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 ReapplyLandscapeLayers: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 ReapplyZOffset: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 ReapplyCollisionWithWorld: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 ReapplyVertexColorMask: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableDensityScaling: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    int32 VirtualTextureCullMips;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;
    
    UFoliageType();
};

