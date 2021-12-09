#include "BrushBaseProperties.h"

UBrushBaseProperties::UBrushBaseProperties() {
    this->BrushSize = 0.25f;
    this->bSpecifyRadius = false;
    this->BrushRadius = 10.00f;
    this->BrushStrength = 0.50f;
    this->BrushFalloffAmount = 1.00f;
    this->bShowStrength = true;
    this->bShowFalloff = true;
}

