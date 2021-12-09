#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: UMG UserWidget
#include "LevelSequencePlayerSnapshot.h"
#include "LevelSequenceBurnIn.generated.h"

class ALevelSequenceActor;
class ULevelSequenceBurnInInitSettings;
class UObject;

UCLASS(EditInlineNew)
class LEVELSEQUENCE_API ULevelSequenceBurnIn : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FLevelSequencePlayerSnapshot FrameInformation;
    
    UPROPERTY(BlueprintReadOnly)
    ALevelSequenceActor* LevelSequenceActor;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void SetSettings(UObject* InSettings);
    
    UFUNCTION(BlueprintNativeEvent)
    TSubclassOf<ULevelSequenceBurnInInitSettings> GetSettingsClass() const;
    
    ULevelSequenceBurnIn();
};

