#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RoomFeature.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "EItemAdjustmentType.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "SpawnActorFeature.generated.h"

class AActor;

UCLASS(EditInlineNew)
class USpawnActorFeature : public URoomFeature {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    FVector Location;
    
    UPROPERTY(VisibleAnywhere)
    TSubclassOf<AActor> ActorToSpawn;
    
    UPROPERTY(VisibleAnywhere)
    FVector AdjustmentDirection;
    
    UPROPERTY(VisibleAnywhere)
    EItemAdjustmentType Adjustment;
    
    UPROPERTY(VisibleAnywhere)
    FVector ScaleMin;
    
    UPROPERTY(VisibleAnywhere)
    FVector ScaleMax;
    
    UPROPERTY(VisibleAnywhere)
    FRotator RotationDelta;
    
public:
    USpawnActorFeature();
};
