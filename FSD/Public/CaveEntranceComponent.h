#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine PrimitiveComponent
#include "ECaveEntranceType.h"
#include "ECaveEntrancePriority.h"
#include "CaveEntranceComponent.generated.h"

UCLASS()
class UCaveEntranceComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ECaveEntranceType Direction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ECaveEntrancePriority Priority;
    
public:
    UCaveEntranceComponent();
};

