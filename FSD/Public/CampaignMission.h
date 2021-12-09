#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "RequiredMissionItem.h"
#include "CampaignMission.generated.h"

class UPlanetZone;
class UMissionTemplate;
class UReward;
class UDialogDataAsset;

UCLASS(BlueprintType, EditInlineNew)
class UCampaignMission : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPlanetZone* PlanetZone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRequiredMissionItem mission;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    TArray<UReward*> Rewards;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* MissionCompleteShout;
    
public:
    UFUNCTION(BlueprintPure)
    UMissionTemplate* GetMissionTemplate() const;
    
    UCampaignMission();
};

