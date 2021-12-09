#include "AnimNode_LayeredBoneBlend.h"

FAnimNode_LayeredBoneBlend::FAnimNode_LayeredBoneBlend() {
    this->bMeshSpaceRotationBlend = false;
    this->bMeshSpaceScaleBlend = false;
    this->CurveBlendOption = ECurveBlendOption::Override;
    this->bBlendRootMotionBasedOnRootBone = false;
    this->LODThreshold = 0;
}

