#pragma once
#include "CoreMinimal.h"
#include "EBone.generated.h"

UENUM(BlueprintType)
enum class EBone : uint8 {
    Wrist_Root,
    Hand_Start = 0x0,
    Forearm_Stub,
    Thumb_0,
    Thumb_1,
    Thumb_2,
    Thumb_3,
    Index_1,
    Index_2,
    Index_3,
    Middle_1,
    Middle_2,
    Middle_3,
    Ring_1,
    Ring_2,
    Ring_3,
    Pinky_0,
    Pinky_1,
    Pinky_2,
    Pinky_3,
    Thumb_Tip,
    Max_Skinnable = 0x13,
    Index_Tip,
    Middle_Tip,
    Ring_Tip,
    Pinky_Tip,
    Hand_End,
    Bone_Max = 0x18,
    Invalid,
};

