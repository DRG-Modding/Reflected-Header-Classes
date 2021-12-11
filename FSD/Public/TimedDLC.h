#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject DateTime
#include "DLCBase.h"
#include "TimedDLC.generated.h"

UCLASS()
class UTimedDLC : public UDLCBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FDateTime StartDate;
    
    UPROPERTY(EditAnywhere)
    FDateTime EndDate;
    
public:
    UTimedDLC();
};

