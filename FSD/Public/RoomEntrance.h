#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ECaveEntranceType.h"
#include "ECaveEntrancePriority.h"
#include "RoomEntrance.generated.h"

USTRUCT(BlueprintType)
struct FRoomEntrance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector Location;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector Direction;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsBLocked;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ECaveEntranceType EntranceType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ECaveEntrancePriority Priority;
    
    UPROPERTY(VisibleAnywhere)
    int32 PathObstacleID;
    
    FSD_API FRoomEntrance();
};

