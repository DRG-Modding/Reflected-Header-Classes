#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "GameActivitySettings.generated.h"

class UGameActivityType;

UCLASS()
class UGameActivitySettings : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UGameActivityType>> GameActivites;
    
public:
    UGameActivitySettings();
};

