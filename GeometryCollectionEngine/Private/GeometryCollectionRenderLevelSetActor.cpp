#include "GeometryCollectionRenderLevelSetActor.h"

AGeometryCollectionRenderLevelSetActor::AGeometryCollectionRenderLevelSetActor() {
    this->SurfaceTolerance = 0.01f;
    this->Isovalue = 0.00f;
    this->Enabled = true;
    this->RenderVolumeBoundingBox = false;
}

