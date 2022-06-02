#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "LevelSequencePlayerSnapshot.h"
#include "LevelSequenceBurnIn.generated.h"

class UObject;
class ALevelSequenceActor;
class ULevelSequenceBurnInInitSettings;

UCLASS(Blueprintable, EditInlineNew)
class LEVELSEQUENCE_API ULevelSequenceBurnIn : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelSequencePlayerSnapshot FrameInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* LevelSequenceActor;
    
public:
    ULevelSequenceBurnIn();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSettings(UObject* InSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<ULevelSequenceBurnInInitSettings> GetSettingsClass() const;
    
};

