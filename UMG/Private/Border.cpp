#include "Border.h"

class UMaterialInterface;
class UTexture2D;
class USlateBrushAsset;
class UMaterialInstanceDynamic;

void UBorder::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UBorder::SetPadding(FMargin InPadding) {
}

void UBorder::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

void UBorder::SetDesiredSizeScale(FVector2D InScale) {
}

void UBorder::SetContentColorAndOpacity(FLinearColor InContentColorAndOpacity) {
}

void UBorder::SetBrushFromTexture(UTexture2D* Texture) {
}

void UBorder::SetBrushFromMaterial(UMaterialInterface* Material) {
}

void UBorder::SetBrushFromAsset(USlateBrushAsset* Asset) {
}

void UBorder::SetBrushColor(FLinearColor InBrushColor) {
}

void UBorder::SetBrush(const FSlateBrush& InBrush) {
}

UMaterialInstanceDynamic* UBorder::GetDynamicMaterial() {
    return NULL;
}

UBorder::UBorder() {
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
    this->bShowEffectWhenDisabled = true;
    this->bFlipForRightToLeftFlowDirection = false;
}

