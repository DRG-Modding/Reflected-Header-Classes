#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "NewPlayerMutator.h"
#include "FSDTutorialSettings.generated.h"

UCLASS()
class UFSDTutorialSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 RequiredCPTreasures;
    
    UPROPERTY(EditAnywhere)
    int32 RequiredCPMachineEvents;
    
    UPROPERTY(EditAnywhere)
    int32 RequiredCPVeterans;
    
    UPROPERTY(EditAnywhere)
    TArray<FNewPlayerMutator> FirstMissionsMutators;
    
    UFSDTutorialSettings();
};

