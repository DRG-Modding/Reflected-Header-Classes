#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Color
#include "GeometryCollectionDebugDrawActorSelectedRigidBody.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "EGeometryCollectionDebugDrawActorHideGeometry.h"
#include "GeometryCollectionDebugDrawWarningMessage.h"
#include "GeometryCollectionDebugDrawActor.generated.h"

class UBillboardComponent;

UCLASS()
class GEOMETRYCOLLECTIONENGINE_API AGeometryCollectionDebugDrawActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGeometryCollectionDebugDrawWarningMessage WarningMessage;
    
    UPROPERTY(EditAnywhere)
    FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;
    
    UPROPERTY(EditAnywhere)
    bool bDebugDrawWholeCollection;
    
    UPROPERTY(EditAnywhere)
    bool bDebugDrawHierarchy;
    
    UPROPERTY(EditAnywhere)
    bool bDebugDrawClustering;
    
    UPROPERTY(EditAnywhere)
    EGeometryCollectionDebugDrawActorHideGeometry HideGeometry;
    
    UPROPERTY(EditAnywhere)
    bool bShowRigidBodyId;
    
    UPROPERTY(EditAnywhere)
    bool bShowRigidBodyCollision;
    
    UPROPERTY(EditAnywhere)
    bool bCollisionAtOrigin;
    
    UPROPERTY(EditAnywhere)
    bool bShowRigidBodyTransform;
    
    UPROPERTY(EditAnywhere)
    bool bShowRigidBodyInertia;
    
    UPROPERTY(EditAnywhere)
    bool bShowRigidBodyVelocity;
    
    UPROPERTY(EditAnywhere)
    bool bShowRigidBodyForce;
    
    UPROPERTY(EditAnywhere)
    bool bShowRigidBodyInfos;
    
    UPROPERTY(EditAnywhere)
    bool bShowTransformIndex;
    
    UPROPERTY(EditAnywhere)
    bool bShowTransform;
    
    UPROPERTY(EditAnywhere)
    bool bShowParent;
    
    UPROPERTY(EditAnywhere)
    bool bShowLevel;
    
    UPROPERTY(EditAnywhere)
    bool bShowConnectivityEdges;
    
    UPROPERTY(EditAnywhere)
    bool bShowGeometryIndex;
    
    UPROPERTY(EditAnywhere)
    bool bShowGeometryTransform;
    
    UPROPERTY(EditAnywhere)
    bool bShowBoundingBox;
    
    UPROPERTY(EditAnywhere)
    bool bShowFaces;
    
    UPROPERTY(EditAnywhere)
    bool bShowFaceIndices;
    
    UPROPERTY(EditAnywhere)
    bool bShowFaceNormals;
    
    UPROPERTY(EditAnywhere)
    bool bShowSingleFace;
    
    UPROPERTY(EditAnywhere)
    int32 SingleFaceIndex;
    
    UPROPERTY(EditAnywhere)
    bool bShowVertices;
    
    UPROPERTY(EditAnywhere)
    bool bShowVertexIndices;
    
    UPROPERTY(EditAnywhere)
    bool bShowVertexNormals;
    
    UPROPERTY(EditAnywhere)
    bool bUseActiveVisualization;
    
    UPROPERTY(EditAnywhere)
    float PointThickness;
    
    UPROPERTY(EditAnywhere)
    float LineThickness;
    
    UPROPERTY(EditAnywhere)
    bool bTextShadow;
    
    UPROPERTY(EditAnywhere)
    float TextScale;
    
    UPROPERTY(EditAnywhere)
    float NormalScale;
    
    UPROPERTY(EditAnywhere)
    float AxisScale;
    
    UPROPERTY(EditAnywhere)
    float ArrowScale;
    
    UPROPERTY(EditAnywhere)
    FColor RigidBodyIdColor;
    
    UPROPERTY(EditAnywhere)
    float RigidBodyTransformScale;
    
    UPROPERTY(EditAnywhere)
    FColor RigidBodyCollisionColor;
    
    UPROPERTY(EditAnywhere)
    FColor RigidBodyInertiaColor;
    
    UPROPERTY(EditAnywhere)
    FColor RigidBodyVelocityColor;
    
    UPROPERTY(EditAnywhere)
    FColor RigidBodyForceColor;
    
    UPROPERTY(EditAnywhere)
    FColor RigidBodyInfoColor;
    
    UPROPERTY(EditAnywhere)
    FColor TransformIndexColor;
    
    UPROPERTY(EditAnywhere)
    float TransformScale;
    
    UPROPERTY(EditAnywhere)
    FColor LevelColor;
    
    UPROPERTY(EditAnywhere)
    FColor ParentColor;
    
    UPROPERTY(EditAnywhere)
    float ConnectivityEdgeThickness;
    
    UPROPERTY(EditAnywhere)
    FColor GeometryIndexColor;
    
    UPROPERTY(EditAnywhere)
    float GeometryTransformScale;
    
    UPROPERTY(EditAnywhere)
    FColor BoundingBoxColor;
    
    UPROPERTY(EditAnywhere)
    FColor FaceColor;
    
    UPROPERTY(EditAnywhere)
    FColor FaceIndexColor;
    
    UPROPERTY(EditAnywhere)
    FColor FaceNormalColor;
    
    UPROPERTY(EditAnywhere)
    FColor SingleFaceColor;
    
    UPROPERTY(EditAnywhere)
    FColor VertexColor;
    
    UPROPERTY(EditAnywhere)
    FColor VertexIndexColor;
    
    UPROPERTY(EditAnywhere)
    FColor VertexNormalColor;
    
    UPROPERTY(Export)
    UBillboardComponent* SpriteComponent;
    
    AGeometryCollectionDebugDrawActor();
};

