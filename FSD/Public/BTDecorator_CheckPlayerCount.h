#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTDecorator
#include "BTDecorator_CheckPlayerCount.generated.h"

UCLASS()
class UBTDecorator_CheckPlayerCount : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 playerCount;
    
    UPROPERTY(EditAnywhere)
    bool AllowLessThanCount;
    
public:
    UBTDecorator_CheckPlayerCount();
};

