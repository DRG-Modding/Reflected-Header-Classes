#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Int32Interval
#include "EliteEnemyBan.generated.h"

class UMissionTemplate;

USTRUCT(BlueprintType)
struct FEliteEnemyBan {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FInt32Interval AffectedPlayerCount;
    
    UPROPERTY(EditAnywhere)
    UMissionTemplate* Template;
    
    FSD_API FEliteEnemyBan();
};

