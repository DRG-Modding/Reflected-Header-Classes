#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine PrimitiveComponent
//CROSS-MODULE INCLUDE: CoreUObject Guid
//CROSS-MODULE INCLUDE: CoreUObject Box
#include "LandscapeHeightfieldCollisionComponent.generated.h"

class ULandscapeLayerInfoObject;
class ULandscapeComponent;
class UPhysicalMaterial;

UCLASS(MinimalAPI, Within=LandscapeProxy)
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<ULandscapeLayerInfoObject*> ComponentLayerInfos;
    
    UPROPERTY()
    int32 SectionBaseX;
    
    UPROPERTY()
    int32 SectionBaseY;
    
    UPROPERTY()
    int32 CollisionSizeQuads;
    
    UPROPERTY()
    float CollisionScale;
    
    UPROPERTY()
    int32 SimpleCollisionSizeQuads;
    
    UPROPERTY()
    TArray<uint8> CollisionQuadFlags;
    
    UPROPERTY()
    FGuid HeightfieldGuid;
    
    UPROPERTY()
    FBox CachedLocalBox;
    
    UPROPERTY(Export)
    TLazyObjectPtr<ULandscapeComponent> RenderComponent;
    
    UPROPERTY()
    TArray<UPhysicalMaterial*> CookedPhysicalMaterials;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULandscapeComponent* GetRenderComponent() const;
    
    ULandscapeHeightfieldCollisionComponent();
};

