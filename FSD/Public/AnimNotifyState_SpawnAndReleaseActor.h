#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine AnimNotifyState
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "AnimNotifyState_SpawnAndReleaseActor.generated.h"

class AActor;

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UAnimNotifyState_SpawnAndReleaseActor : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> Actor;
    
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    FVector LocationOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator RotationOffset;
    
public:
    UAnimNotifyState_SpawnAndReleaseActor();
};

