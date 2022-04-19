#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "LandscapeHeightfieldCollisionComponent.generated.h"

class UPhysicalMaterial;
class ULandscapeComponent;
class ULandscapeLayerInfoObject;

UCLASS(MinimalAPI, Within=LandscapeProxy, meta=(BlueprintSpawnableComponent))
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<ULandscapeLayerInfoObject*> ComponentLayerInfos;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 SectionBaseX;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 SectionBaseY;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 CollisionSizeQuads;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float CollisionScale;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 SimpleCollisionSizeQuads;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<uint8> CollisionQuadFlags;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid HeightfieldGuid;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FBox CachedLocalBox;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    TLazyObjectPtr<ULandscapeComponent> RenderComponent;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<UPhysicalMaterial*> CookedPhysicalMaterials;
    
    ULandscapeHeightfieldCollisionComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULandscapeComponent* GetRenderComponent() const;
    
};

