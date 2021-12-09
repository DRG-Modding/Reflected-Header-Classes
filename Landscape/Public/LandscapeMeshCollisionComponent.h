#pragma once
#include "CoreMinimal.h"
#include "LandscapeHeightfieldCollisionComponent.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "LandscapeMeshCollisionComponent.generated.h"

UCLASS()
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid MeshGuid;
    
    ULandscapeMeshCollisionComponent();
};

