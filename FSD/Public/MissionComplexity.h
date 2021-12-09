#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "MissionComplexity.generated.h"

UCLASS(BlueprintType)
class UMissionComplexity : public UDataAsset {
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
    
    UMissionComplexity();
};

