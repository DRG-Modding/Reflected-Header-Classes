#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "EnemyFamily.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class UEnemyFamily : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;
    
    UEnemyFamily();
};

