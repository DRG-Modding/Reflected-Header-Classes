#include "BrushStampIndicator.h"

UBrushStampIndicator::UBrushStampIndicator() {
    this->BrushRadius = 1.00f;
    this->BrushFalloff = 0.50f;
    this->bDrawIndicatorLines = true;
    this->bDrawRadiusCircle = true;
    this->SampleStepCount = 32;
    this->LineThickness = 2.00f;
    this->bDepthTested = false;
    this->bDrawSecondaryLines = true;
    this->SecondaryLineThickness = 0.50f;
    this->AttachedComponent = NULL;
}

