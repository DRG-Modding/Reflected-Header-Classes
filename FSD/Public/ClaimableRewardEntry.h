#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "ClaimableRewardEntry.generated.h"

class UObject;
class UReward;

USTRUCT(BlueprintType)
struct FClaimableRewardEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UObject* Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TArray<UReward*> Rewards;
    
    UPROPERTY(EditAnywhere)
    FGuid SaveGameID;
    
    FSD_API FClaimableRewardEntry();
};

