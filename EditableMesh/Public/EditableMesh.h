#pragma once
#include "CoreMinimal.h"
#include "VertexAttributesForPolygon.h"
#include "EMeshModificationType.h"
#include "PolygonGroupToCreate.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: MeshDescription EdgeID
#include "EInsetPolygonsMode.h"
//CROSS-MODULE INCLUDE: MeshDescription VertexID
//CROSS-MODULE INCLUDE: MeshDescription PolygonID
#include "ETriangleTessellationMode.h"
#include "VertexToCreate.h"
#include "SubdivisionLimitData.h"
#include "EMeshTopologyChange.h"
#include "PolygonToSplit.h"
//CROSS-MODULE INCLUDE: CoreUObject Plane
#include "AttributesForVertexInstance.h"
#include "AttributesForVertex.h"
#include "AttributesForEdge.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "VertexToMove.h"
//CROSS-MODULE INCLUDE: MeshDescription PolygonGroupID
//CROSS-MODULE INCLUDE: MeshDescription VertexInstanceID
//CROSS-MODULE INCLUDE: MeshDescription TriangleID
#include "VertexInstanceToCreate.h"
#include "PolygonToCreate.h"
#include "EdgeToCreate.h"
//CROSS-MODULE INCLUDE: CoreUObject BoxSphereBounds
//CROSS-MODULE INCLUDE: CoreUObject Box
#include "ChangeVertexInstancesForPolygon.h"
#include "PolygonGroupForPolygon.h"
#include "EditableMesh.generated.h"

class UEditableMeshAdapter;
class UEditableMesh;
class UPrimitiveComponent;

UCLASS(BlueprintType)
class EDITABLEMESH_API UEditableMesh : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UEditableMeshAdapter*> Adapters;
    
    UPROPERTY(BlueprintReadOnly)
    int32 TextureCoordinateCount;
    
    UPROPERTY()
    int32 PendingCompactCounter;
    
    UPROPERTY(BlueprintReadOnly)
    int32 SubdivisionCount;
    
    UFUNCTION(BlueprintCallable)
    void WeldVertices(const TArray<FVertexID>& VertexIDs, FVertexID& OutNewVertexID);
    
    UFUNCTION(BlueprintCallable)
    void TryToRemoveVertex(const FVertexID VertexID, bool& bOutWasVertexRemoved, FEdgeID& OutNewEdgeID);
    
    UFUNCTION(BlueprintCallable)
    void TryToRemovePolygonEdge(const FEdgeID EdgeID, bool& bOutWasEdgeRemoved, FPolygonID& OutNewPolygonID);
    
    UFUNCTION(BlueprintCallable)
    void TriangulatePolygons(const TArray<FPolygonID>& PolygonIDs, TArray<FPolygonID>& OutNewTrianglePolygons);
    
    UFUNCTION(BlueprintCallable)
    void TessellatePolygons(const TArray<FPolygonID>& PolygonIDs, const ETriangleTessellationMode TriangleTessellationMode, TArray<FPolygonID>& OutNewPolygonIDs);
    
    UFUNCTION(BlueprintCallable)
    void StartModification(const EMeshModificationType MeshModificationType, const EMeshTopologyChange MeshTopologyChange);
    
    UFUNCTION(BlueprintCallable)
    void SplitPolygons(const TArray<FPolygonToSplit>& PolygonsToSplit, TArray<FEdgeID>& OutNewEdgeIDs);
    
    UFUNCTION(BlueprintCallable)
    void SplitPolygonalMesh(const FPlane& InPlane, TArray<FPolygonID>& PolygonIDs1, TArray<FPolygonID>& PolygonIDs2, TArray<FEdgeID>& BoundaryIDs);
    
    UFUNCTION(BlueprintCallable)
    void SplitEdge(const FEdgeID EdgeID, const TArray<float>& Splits, TArray<FVertexID>& OutNewVertexIDs);
    
    UFUNCTION(BlueprintCallable)
    void SetVerticesCornerSharpness(const TArray<FVertexID>& VertexIDs, const TArray<float>& VerticesNewCornerSharpness);
    
    UFUNCTION(BlueprintCallable)
    void SetVerticesAttributes(const TArray<FAttributesForVertex>& AttributesForVertices);
    
    UFUNCTION(BlueprintCallable)
    void SetVertexInstancesAttributes(const TArray<FAttributesForVertexInstance>& AttributesForVertexInstances);
    
    UFUNCTION(BlueprintCallable)
    void SetTextureCoordinateCount(const int32 NumTexCoords);
    
    UFUNCTION(BlueprintCallable)
    void SetSubdivisionCount(const int32 NewSubdivisionCount);
    
    UFUNCTION(BlueprintCallable)
    void SetPolygonsVertexAttributes(const TArray<FVertexAttributesForPolygon>& VertexAttributesForPolygons);
    
    UFUNCTION(BlueprintCallable)
    void SetEdgesHardnessAutomatically(const TArray<FEdgeID>& EdgeIDs, const float MaxDotProductForSoftEdge);
    
    UFUNCTION(BlueprintCallable)
    void SetEdgesHardness(const TArray<FEdgeID>& EdgeIDs, const TArray<bool>& EdgesNewIsHard);
    
    UFUNCTION(BlueprintCallable)
    void SetEdgesCreaseSharpness(const TArray<FEdgeID>& EdgeIDs, const TArray<float>& EdgesNewCreaseSharpness);
    
    UFUNCTION(BlueprintCallable)
    void SetEdgesAttributes(const TArray<FAttributesForEdge>& AttributesForEdges);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowUndo(const bool bInAllowUndo);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowSpatialDatabase(const bool bInAllowSpatialDatabase);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowCompact(const bool bInAllowCompact);
    
    UFUNCTION(BlueprintPure)
    void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(const FPlane& InPlane, TArray<FPolygonID>& OutPolygons) const;
    
    UFUNCTION(BlueprintPure)
    void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(const FVector LineSegmentStart, const FVector LineSegmentEnd, TArray<FPolygonID>& OutPolygons) const;
    
    UFUNCTION(BlueprintPure)
    void SearchSpatialDatabaseForPolygonsInVolume(const TArray<FPlane>& Planes, TArray<FPolygonID>& OutPolygons) const;
    
    UFUNCTION(BlueprintCallable)
    UEditableMesh* RevertInstance();
    
    UFUNCTION(BlueprintCallable)
    void Revert();
    
    UFUNCTION(BlueprintCallable)
    void RebuildRenderMesh();
    
    UFUNCTION(BlueprintCallable)
    void QuadrangulateMesh(TArray<FPolygonID>& OutNewPolygonIDs);
    
    UFUNCTION(BlueprintCallable)
    void PropagateInstanceChanges();
    
    UFUNCTION(BlueprintCallable)
    void MoveVertices(const TArray<FVertexToMove>& VerticesToMove);
    
    UFUNCTION(BlueprintPure)
    static FVertexID MakeVertexID(const int32 VertexIndex);
    
    UFUNCTION(BlueprintPure)
    static FPolygonID MakePolygonID(const int32 PolygonIndex);
    
    UFUNCTION(BlueprintPure)
    static FPolygonGroupID MakePolygonGroupID(const int32 PolygonGroupIndex);
    
    UFUNCTION(BlueprintPure)
    static FEdgeID MakeEdgeID(const int32 EdgeIndex);
    
    UFUNCTION(BlueprintPure)
    bool IsValidVertex(const FVertexID VertexID) const;
    
    UFUNCTION(BlueprintPure)
    bool IsValidPolygonGroup(const FPolygonGroupID PolygonGroupID) const;
    
    UFUNCTION(BlueprintPure)
    bool IsValidPolygon(const FPolygonID PolygonID) const;
    
    UFUNCTION(BlueprintPure)
    bool IsValidEdge(const FEdgeID EdgeID) const;
    
    UFUNCTION(BlueprintPure)
    bool IsUndoAllowed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSpatialDatabaseAllowed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPreviewingSubdivisions() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOrphanedVertex(const FVertexID VertexID) const;
    
    UFUNCTION(BlueprintPure)
    bool IsCompactAllowed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCommittedAsInstance() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCommitted() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBeingModified() const;
    
    UFUNCTION(BlueprintPure)
    static FVertexID InvalidVertexID();
    
    UFUNCTION(BlueprintPure)
    static FPolygonID InvalidPolygonID();
    
    UFUNCTION(BlueprintPure)
    static FPolygonGroupID InvalidPolygonGroupID();
    
    UFUNCTION(BlueprintPure)
    static FEdgeID InvalidEdgeID();
    
    UFUNCTION(BlueprintCallable)
    void InsetPolygons(const TArray<FPolygonID>& PolygonIDs, const float InsetFixedDistance, const float InsetProgressTowardCenter, const EInsetPolygonsMode Mode, TArray<FPolygonID>& OutNewCenterPolygonIDs, TArray<FPolygonID>& OutNewSidePolygonIDs);
    
    UFUNCTION(BlueprintCallable)
    void InsertEdgeLoop(const FEdgeID EdgeID, const TArray<float>& Splits, TArray<FEdgeID>& OutNewEdgeIDs);
    
    UFUNCTION(BlueprintCallable)
    void InitializeAdapters();
    
    UFUNCTION(BlueprintPure)
    FEdgeID GetVertexPairEdge(const FVertexID VertexID, const FVertexID NextVertexID, bool& bOutEdgeWindingIsReversed) const;
    
    UFUNCTION(BlueprintPure)
    FVertexID GetVertexInstanceVertex(const FVertexInstanceID VertexInstanceID) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetVertexInstanceCount() const;
    
    UFUNCTION(BlueprintPure)
    void GetVertexInstanceConnectedPolygons(const FVertexInstanceID VertexInstanceID, TArray<FPolygonID>& OutConnectedPolygonIDs) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetVertexInstanceConnectedPolygonCount(const FVertexInstanceID VertexInstanceID) const;
    
    UFUNCTION(BlueprintPure)
    FPolygonID GetVertexInstanceConnectedPolygon(const FVertexInstanceID VertexInstanceID, const int32 ConnectedPolygonNumber) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetVertexCount() const;
    
    UFUNCTION(BlueprintPure)
    void GetVertexConnectedPolygons(const FVertexID VertexID, TArray<FPolygonID>& OutConnectedPolygonIDs) const;
    
    UFUNCTION(BlueprintPure)
    void GetVertexConnectedEdges(const FVertexID VertexID, TArray<FEdgeID>& OutConnectedEdgeIDs) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetVertexConnectedEdgeCount(const FVertexID VertexID) const;
    
    UFUNCTION(BlueprintPure)
    FEdgeID GetVertexConnectedEdge(const FVertexID VertexID, const int32 ConnectedEdgeNumber) const;
    
    UFUNCTION(BlueprintPure)
    void GetVertexAdjacentVertices(const FVertexID VertexID, TArray<FVertexID>& OutAdjacentVertexIDs) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTextureCoordinateCount() const;
    
    UFUNCTION(BlueprintPure)
    FSubdivisionLimitData GetSubdivisionLimitData() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSubdivisionCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPolygonTriangulatedTriangleCount(const FPolygonID PolygonID) const;
    
    UFUNCTION(BlueprintPure)
    FTriangleID GetPolygonTriangulatedTriangle(const FPolygonID PolygonID, int32 PolygonTriangleNumber) const;
    
    UFUNCTION(BlueprintPure)
    void GetPolygonPerimeterVertices(const FPolygonID PolygonID, TArray<FVertexID>& OutPolygonPerimeterVertexIDs) const;
    
    UFUNCTION(BlueprintPure)
    void GetPolygonPerimeterVertexInstances(const FPolygonID PolygonID, TArray<FVertexInstanceID>& OutPolygonPerimeterVertexInstanceIDs) const;
    
    UFUNCTION(BlueprintPure)
    FVertexInstanceID GetPolygonPerimeterVertexInstance(const FPolygonID PolygonID, const int32 PolygonVertexNumber) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPolygonPerimeterVertexCount(const FPolygonID PolygonID) const;
    
    UFUNCTION(BlueprintPure)
    FVertexID GetPolygonPerimeterVertex(const FPolygonID PolygonID, const int32 PolygonVertexNumber) const;
    
    UFUNCTION(BlueprintPure)
    void GetPolygonPerimeterEdges(const FPolygonID PolygonID, TArray<FEdgeID>& OutPolygonPerimeterEdgeIDs) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPolygonPerimeterEdgeCount(const FPolygonID PolygonID) const;
    
    UFUNCTION(BlueprintPure)
    FEdgeID GetPolygonPerimeterEdge(const FPolygonID PolygonID, const int32 PerimeterEdgeNumber, bool& bOutEdgeWindingIsReversedForPolygon) const;
    
    UFUNCTION(BlueprintPure)
    FPolygonID GetPolygonInGroup(const FPolygonGroupID PolygonGroupID, const int32 PolygonNumber) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPolygonGroupCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPolygonCountInGroup(const FPolygonGroupID PolygonGroupID) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPolygonCount() const;
    
    UFUNCTION(BlueprintPure)
    void GetPolygonAdjacentPolygons(const FPolygonID PolygonID, TArray<FPolygonID>& OutAdjacentPolygons) const;
    
    UFUNCTION(BlueprintPure)
    FPolygonGroupID GetGroupForPolygon(const FPolygonID PolygonID) const;
    
    UFUNCTION(BlueprintPure)
    FPolygonGroupID GetFirstValidPolygonGroup() const;
    
    UFUNCTION(BlueprintPure)
    void GetEdgeVertices(const FEdgeID EdgeID, FVertexID& OutEdgeVertexID0, FVertexID& OutEdgeVertexID1) const;
    
    UFUNCTION(BlueprintPure)
    FVertexID GetEdgeVertex(const FEdgeID EdgeID, const int32 EdgeVertexNumber) const;
    
    UFUNCTION(BlueprintPure)
    FEdgeID GetEdgeThatConnectsVertices(const FVertexID VertexID0, const FVertexID VertexID1) const;
    
    UFUNCTION(BlueprintPure)
    void GetEdgeLoopElements(const FEdgeID EdgeID, TArray<FEdgeID>& EdgeLoopIDs) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetEdgeCount() const;
    
    UFUNCTION(BlueprintPure)
    void GetEdgeConnectedPolygons(const FEdgeID EdgeID, TArray<FPolygonID>& OutConnectedPolygonIDs) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetEdgeConnectedPolygonCount(const FEdgeID EdgeID) const;
    
    UFUNCTION(BlueprintPure)
    FPolygonID GetEdgeConnectedPolygon(const FEdgeID EdgeID, const int32 ConnectedPolygonNumber) const;
    
    UFUNCTION(BlueprintCallable)
    void GeneratePolygonTangentsAndNormals(const TArray<FPolygonID>& PolygonIDs);
    
    UFUNCTION(BlueprintCallable)
    void FlipPolygons(const TArray<FPolygonID>& PolygonIDs);
    
    UFUNCTION(BlueprintPure)
    int32 FindPolygonPerimeterVertexNumberForVertex(const FPolygonID PolygonID, const FVertexID VertexID) const;
    
    UFUNCTION(BlueprintPure)
    int32 FindPolygonPerimeterEdgeNumberForVertices(const FPolygonID PolygonID, const FVertexID EdgeVertexID0, const FVertexID EdgeVertexID1) const;
    
    UFUNCTION(BlueprintPure)
    void FindPolygonLoop(const FEdgeID EdgeID, TArray<FEdgeID>& OutEdgeLoopEdgeIDs, TArray<FEdgeID>& OutFlippedEdgeIDs, TArray<FEdgeID>& OutReversedEdgeIDPathToTake, TArray<FPolygonID>& OutPolygonIDsToSplit) const;
    
    UFUNCTION(BlueprintCallable)
    void ExtrudePolygons(const TArray<FPolygonID>& Polygons, const float ExtrudeDistance, const bool bKeepNeighborsTogether, TArray<FPolygonID>& OutNewExtrudedFrontPolygons);
    
    UFUNCTION(BlueprintCallable)
    void ExtendVertices(const TArray<FVertexID>& VertexIDs, const bool bOnlyExtendClosestEdge, const FVector ReferencePosition, TArray<FVertexID>& OutNewExtendedVertexIDs);
    
    UFUNCTION(BlueprintCallable)
    void ExtendEdges(const TArray<FEdgeID>& EdgeIDs, const bool bWeldNeighbors, TArray<FEdgeID>& OutNewExtendedEdgeIDs);
    
    UFUNCTION(BlueprintCallable)
    void EndModification(const bool bFromUndo);
    
    UFUNCTION(BlueprintCallable)
    void DeleteVertexInstances(const TArray<FVertexInstanceID>& VertexInstanceIDsToDelete, const bool bDeleteOrphanedVertices);
    
    UFUNCTION(BlueprintCallable)
    void DeleteVertexAndConnectedEdgesAndPolygons(const FVertexID VertexID, const bool bDeleteOrphanedEdges, const bool bDeleteOrphanedVertices, const bool bDeleteOrphanedVertexInstances, const bool bDeleteEmptyPolygonGroups);
    
    UFUNCTION(BlueprintCallable)
    void DeletePolygons(const TArray<FPolygonID>& PolygonIDsToDelete, const bool bDeleteOrphanedEdges, const bool bDeleteOrphanedVertices, const bool bDeleteOrphanedVertexInstances, const bool bDeleteEmptyPolygonGroups);
    
    UFUNCTION(BlueprintCallable)
    void DeletePolygonGroups(const TArray<FPolygonGroupID>& PolygonGroupIDs);
    
    UFUNCTION(BlueprintCallable)
    void DeleteOrphanVertices(const TArray<FVertexID>& VertexIDsToDelete);
    
    UFUNCTION(BlueprintCallable)
    void DeleteEdges(const TArray<FEdgeID>& EdgeIDsToDelete, const bool bDeleteOrphanedVertices);
    
    UFUNCTION(BlueprintCallable)
    void DeleteEdgeAndConnectedPolygons(const FEdgeID EdgeID, const bool bDeleteOrphanedEdges, const bool bDeleteOrphanedVertices, const bool bDeleteOrphanedVertexInstances, const bool bDeleteEmptyPolygonGroups);
    
    UFUNCTION(BlueprintCallable)
    void CreateVertices(const TArray<FVertexToCreate>& VerticesToCreate, TArray<FVertexID>& OutNewVertexIDs);
    
    UFUNCTION(BlueprintCallable)
    void CreateVertexInstances(const TArray<FVertexInstanceToCreate>& VertexInstancesToCreate, TArray<FVertexInstanceID>& OutNewVertexInstanceIDs);
    
    UFUNCTION(BlueprintCallable)
    void CreatePolygons(const TArray<FPolygonToCreate>& PolygonsToCreate, TArray<FPolygonID>& OutNewPolygonIDs, TArray<FEdgeID>& OutNewEdgeIDs);
    
    UFUNCTION(BlueprintCallable)
    void CreatePolygonGroups(const TArray<FPolygonGroupToCreate>& PolygonGroupsToCreate, TArray<FPolygonGroupID>& OutNewPolygonGroupIDs);
    
    UFUNCTION(BlueprintCallable)
    void CreateMissingPolygonPerimeterEdges(const FPolygonID PolygonID, TArray<FEdgeID>& OutNewEdgeIDs);
    
    UFUNCTION(BlueprintCallable)
    void CreateEmptyVertexRange(const int32 NumVerticesToCreate, TArray<FVertexID>& OutNewVertexIDs);
    
    UFUNCTION(BlueprintCallable)
    void CreateEdges(const TArray<FEdgeToCreate>& EdgesToCreate, TArray<FEdgeID>& OutNewEdgeIDs);
    
    UFUNCTION(BlueprintPure)
    void ComputePolygonsSharedEdges(const TArray<FPolygonID>& PolygonIDs, TArray<FEdgeID>& OutSharedEdgeIDs) const;
    
    UFUNCTION(BlueprintPure)
    FPlane ComputePolygonPlane(const FPolygonID PolygonID) const;
    
    UFUNCTION(BlueprintPure)
    FVector ComputePolygonNormal(const FPolygonID PolygonID) const;
    
    UFUNCTION(BlueprintPure)
    FVector ComputePolygonCenter(const FPolygonID PolygonID) const;
    
    UFUNCTION(BlueprintPure)
    FBoxSphereBounds ComputeBoundingBoxAndSphere() const;
    
    UFUNCTION(BlueprintPure)
    FBox ComputeBoundingBox() const;
    
    UFUNCTION(BlueprintCallable)
    UEditableMesh* CommitInstance(UPrimitiveComponent* ComponentToInstanceTo);
    
    UFUNCTION(BlueprintCallable)
    void Commit();
    
    UFUNCTION(BlueprintCallable)
    void ChangePolygonsVertexInstances(const TArray<FChangeVertexInstancesForPolygon>& VertexInstancesForPolygons);
    
    UFUNCTION(BlueprintCallable)
    void BevelPolygons(const TArray<FPolygonID>& PolygonIDs, const float BevelFixedDistance, const float BevelProgressTowardCenter, TArray<FPolygonID>& OutNewCenterPolygonIDs, TArray<FPolygonID>& OutNewSidePolygonIDs);
    
    UFUNCTION(BlueprintCallable)
    void AssignPolygonsToPolygonGroups(const TArray<FPolygonGroupForPolygon>& PolygonGroupForPolygons, const bool bDeleteOrphanedPolygonGroups);
    
    UFUNCTION(BlueprintPure)
    bool AnyChangesToUndo() const;
    
    UEditableMesh();
};

