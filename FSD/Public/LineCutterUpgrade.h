#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ELineCutterUpgradeType.h"
#include "StandardItemUpgrade.h"
#include "UpgradeValues.h"
#include "LineCutterUpgrade.generated.h"

class AFSDPlayerState;
class AActor;

UCLASS(EditInlineNew, MinimalAPI)
class ULineCutterUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ELineCutterUpgradeType upgradeType;
    
public:
    UFUNCTION(BlueprintPure)
    static FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, ELineCutterUpgradeType NewUpgradeType);
    
    ULineCutterUpgrade();
};

