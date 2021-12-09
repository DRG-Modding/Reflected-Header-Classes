#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine TableRowBase
#include "TesterName.generated.h"

USTRUCT(BlueprintType)
struct FTesterName : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString SteamID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString SteamProfileName;
    
    FSD_API FTesterName();
};

