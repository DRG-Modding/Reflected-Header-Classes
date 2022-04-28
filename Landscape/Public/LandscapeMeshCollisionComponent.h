#pragma once
#include "CoreMinimal.h"
#include "LandscapeHeightfieldCollisionComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "LandscapeMeshCollisionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid MeshGuid;
    
    ULandscapeMeshCollisionComponent();
};

