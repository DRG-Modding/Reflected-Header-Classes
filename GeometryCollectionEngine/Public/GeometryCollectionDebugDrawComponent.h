#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "GeometryCollectionDebugDrawComponent.generated.h"

class AGeometryCollectionDebugDrawActor;
class AGeometryCollectionRenderLevelSetActor;

UCLASS()
class GEOMETRYCOLLECTIONENGINE_API UGeometryCollectionDebugDrawComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor;
    
    UGeometryCollectionDebugDrawComponent();
};

