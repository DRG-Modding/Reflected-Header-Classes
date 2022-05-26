#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "LandscapeHeightfieldCollisionComponent.generated.h"

class ULandscapeLayerInfoObject;
class ULandscapeComponent;
class UPhysicalMaterial;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, Within=LandscapeProxy, meta=(BlueprintSpawnableComponent))
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULandscapeLayerInfoObject*> ComponentLayerInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionBaseX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionBaseY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollisionSizeQuads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SimpleCollisionSizeQuads;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> CollisionQuadFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid HeightfieldGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox CachedLocalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TLazyObjectPtr<ULandscapeComponent> RenderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPhysicalMaterial*> CookedPhysicalMaterials;
    
    ULandscapeHeightfieldCollisionComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULandscapeComponent* GetRenderComponent() const;
    
};

