#include "AnimNode_ApplyAdditive.h"

FAnimNode_ApplyAdditive::FAnimNode_ApplyAdditive() {
    this->alpha = 0.00f;
    this->LODThreshold = 0;
    this->AlphaInputType = EAnimAlphaInputType::Float;
    this->bAlphaBoolEnabled = false;
}

