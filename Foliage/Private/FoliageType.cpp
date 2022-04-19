#include "FoliageType.h"

UFoliageType::UFoliageType() {
    this->Density = 100.00f;
    this->DensityAdjustmentFactor = 1.00f;
    this->Radius = 0.00f;
    this->bSingleInstanceModeOverrideRadius = false;
    this->SingleInstanceModeRadius = 0.00f;
    this->Scaling = EFoliageScaling::Uniform;
    this->VertexColorMask = FOLIAGEVERTEXCOLORMASK_Disabled;
    this->VertexColorMaskThreshold = 0.00f;
    this->VertexColorMaskInvert = false;
    this->AlignToNormal = true;
    this->AlignMaxAngle = 0.00f;
    this->RandomYaw = true;
    this->RandomPitchAngle = 0.00f;
    this->MinimumLayerWeight = 0.50f;
    this->MinimumExclusionLayerWeight = 0.00f;
    this->CollisionWithWorld = false;
    this->Mobility = EComponentMobility::Static;
    this->bEnableStaticLighting = true;
    this->CastShadow = true;
    this->bAffectDynamicIndirectLighting = false;
    this->bAffectDistanceFieldLighting = false;
    this->bCastDynamicShadow = true;
    this->bCastStaticShadow = true;
    this->bCastShadowAsTwoSided = false;
    this->bReceivesDecals = false;
    this->bOverrideLightMapRes = false;
    this->OverriddenLightMapRes = 8;
    this->LightmapType = ELightmapType::Default;
    this->bUseAsOccluder = false;
    this->bVisibleInRayTracing = true;
    this->bEvaluateWorldPositionOffset = false;
    this->CustomNavigableGeometry = EHasCustomNavigableGeometry::No;
    this->bRenderCustomDepth = false;
    this->CustomDepthStencilWriteMask = ERendererStencilMask::ERSM_Default;
    this->CustomDepthStencilValue = 0;
    this->TranslucencySortPriority = 0;
    this->CollisionRadius = 100.00f;
    this->ShadeRadius = 100.00f;
    this->NumSteps = 3;
    this->InitialSeedDensity = 1.00f;
    this->AverageSpreadDistance = 50.00f;
    this->SpreadVariance = 150.00f;
    this->SeedsPerStep = 3;
    this->DistributionSeed = 0;
    this->MaxInitialSeedOffset = 0.00f;
    this->bCanGrowInShade = false;
    this->bSpawnsInShade = false;
    this->MaxInitialAge = 0.00f;
    this->MaxAge = 10.00f;
    this->OverlapPriority = 0.00f;
    this->ChangeCount = 0;
    this->ReapplyDensity = false;
    this->ReapplyRadius = false;
    this->ReapplyAlignToNormal = false;
    this->ReapplyRandomYaw = false;
    this->ReapplyScaling = false;
    this->ReapplyScaleX = false;
    this->ReapplyScaleY = false;
    this->ReapplyScaleZ = false;
    this->ReapplyRandomPitchAngle = false;
    this->ReapplyGroundSlope = false;
    this->ReapplyHeight = false;
    this->ReapplyLandscapeLayers = false;
    this->ReapplyZOffset = false;
    this->ReapplyCollisionWithWorld = false;
    this->ReapplyVertexColorMask = false;
    this->bEnableDensityScaling = false;
    this->bEnableDiscardOnLoad = false;
    this->VirtualTextureCullMips = 0;
    this->VirtualTextureRenderPassType = ERuntimeVirtualTextureMainPassType::Exclusive;
}

