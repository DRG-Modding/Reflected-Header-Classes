#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "RoomDecorationObject.generated.h"

class UDebrisPositioning;
class AActor;

UCLASS()
class URoomDecorationObject : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Instanced)
    UDebrisPositioning* Positioning;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> Actor;
    
public:
    URoomDecorationObject();
};

