#pragma once
#include "CoreMinimal.h"
#include "DLCBase.h"
//CROSS-MODULE INCLUDE: CoreUObject DateTime
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

