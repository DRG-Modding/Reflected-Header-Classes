#include "ClothingAssetCommon.h"

UClothingAssetCommon::UClothingAssetCommon() {
    this->PhysicsAsset = NULL;
    this->ClothSharedSimConfig = NULL;
    this->ClothSimConfig = NULL;
    this->ChaosClothSimConfig = NULL;
    this->ReferenceBoneIndex = 0;
    this->CustomData = NULL;
}

