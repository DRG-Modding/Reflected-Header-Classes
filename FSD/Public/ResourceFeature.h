#pragma once
#include "CoreMinimal.h"
#include "RoomFeature.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ResourceFeature.generated.h"

class UResourceData;

UCLASS(EditInlineNew)
class UResourceFeature : public URoomFeature {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    FVector Location;
    
    UPROPERTY(VisibleAnywhere)
    UResourceData* Resource;
    
    UPROPERTY(VisibleAnywhere)
    float BaseAmount;
    
public:
    UResourceFeature();
};

