#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int32Interval -FallbackName=Int32Interval
#include "EliteEnemyBan.generated.h"

class UMissionTemplate;

USTRUCT(BlueprintType)
struct FEliteEnemyBan {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FInt32Interval AffectedPlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionTemplate* Template;
    
    FSD_API FEliteEnemyBan();
};

