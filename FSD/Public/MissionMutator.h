#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "MissionMutator.generated.h"

class UMutator;
class UTexture2D;
class URunningMissionBP;
class UObjective;

UCLASS(BlueprintType)
class UMissionMutator : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<URunningMissionBP> MissionBP;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<UObjective>> BannedObjectives;
    
    UPROPERTY(EditAnywhere)
    TArray<UMutator*> Mutators;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText RichDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* Icon;
    
public:
    UMissionMutator();
};

