#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "ShowroomItem.generated.h"

class AShowroomStage;

UCLASS(Abstract)
class AShowroomItem : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AShowroomStage> ShowroomStage;
    
    AShowroomItem();
};

