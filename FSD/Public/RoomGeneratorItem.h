#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "RoomGeneratorItem.generated.h"

class URoomGeneratorBase;

USTRUCT(BlueprintType)
struct FRoomGeneratorItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    URoomGeneratorBase* RoomGenerator;
    
    UPROPERTY(Transient)
    FVector Position;
    
    UPROPERTY(Transient)
    float Rotation;
    
    FSD_API FRoomGeneratorItem();
};

