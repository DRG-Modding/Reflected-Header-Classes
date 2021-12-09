#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "RoomFeature.generated.h"

class URoomFeature;

UCLASS(DefaultToInstanced, EditInlineNew)
class URoomFeature : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, VisibleAnywhere)
    TArray<URoomFeature*> RoomFeatures;
    
public:
    URoomFeature();
};

