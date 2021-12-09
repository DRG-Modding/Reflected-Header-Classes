#include "AnimNode_SteamVRInputAnimPose.h"

FAnimNode_SteamVRInputAnimPose::FAnimNode_SteamVRInputAnimPose() {
    this->MotionRange = EMotionRange::VR_WithoutController;
    this->hand = EHand::VR_LeftHand;
    this->HandSkeleton = EHandSkeleton::VR_SteamVRHandSkeleton;
    this->Mirror = false;
}

