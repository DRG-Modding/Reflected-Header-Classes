#include "SteamVRHQStereoLayerShape.h"

void USteamVRHQStereoLayerShape::SetCurved(bool InCurved) {
}

void USteamVRHQStereoLayerShape::SetAutoCurveMinDistance(float InDistance) {
}

void USteamVRHQStereoLayerShape::SetAutoCurveMaxDistance(float InDistance) {
}

void USteamVRHQStereoLayerShape::SetAntiAlias(bool InAntiAlias) {
}

USteamVRHQStereoLayerShape::USteamVRHQStereoLayerShape() {
    this->bCurved = false;
    this->bAntiAlias = false;
    this->AutoCurveMinDistance = 0.00f;
    this->AutoCurveMaxDistance = 0.00f;
}

