#include "FuelLineEndPoint.h"
#include "FuelLineConnectPoint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

class UTrackBuilderConnectPoint;
class ATrackBuilderSegment;


void AFuelLineEndPoint::CallbackConnectedWithSegment(UTrackBuilderConnectPoint* InConnectPoint, ATrackBuilderSegment* InSegment) {
}

AFuelLineEndPoint::AFuelLineEndPoint() {
    this->ConnectPoint = CreateDefaultSubobject<UFuelLineConnectPoint>(TEXT("ConnectPoint"));
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
}

