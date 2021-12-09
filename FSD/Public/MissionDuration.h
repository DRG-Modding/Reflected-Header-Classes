#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "MissionDuration.generated.h"

UCLASS(BlueprintType)
class UMissionDuration : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HazardBonus;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NumberOfDots;
    
    UPROPERTY()
    FGuid SaveGameID;
    
    UMissionDuration();
};

