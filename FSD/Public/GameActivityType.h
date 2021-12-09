#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "EActivityType.h"
#include "GameActivitySubTask.h"
#include "GameActivityType.generated.h"

UCLASS()
class UGameActivityType : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString ActivityId;
    
    UPROPERTY(EditAnywhere)
    EActivityType ActivityType;
    
    UPROPERTY(EditAnywhere)
    TArray<FGameActivitySubTask> SubTasks;
    
    UGameActivityType();
};

