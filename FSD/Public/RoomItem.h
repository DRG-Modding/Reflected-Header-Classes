#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Rotator_NoQuantize.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "RoomItem.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FRoomItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSubclassOf<AActor> Spawnable;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FRotator_NoQuantize Rotation;
    
    FSD_API FRoomItem();
};

