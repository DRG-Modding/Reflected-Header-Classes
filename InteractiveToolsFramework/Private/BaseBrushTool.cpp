#include "BaseBrushTool.h"

UBaseBrushTool::UBaseBrushTool() {
    this->BrushProperties = NULL;
    this->bInBrushStroke = false;
    this->WorldToLocalScale = 1.00f;
    this->BrushStampIndicator = NULL;
}

