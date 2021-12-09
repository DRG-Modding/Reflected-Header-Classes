#pragma once
#include "CoreMinimal.h"
#include "EVanitySlot.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "CharacterSelectionSwitcher.generated.h"

class APlayerCharacter;
class UVictoryPose;

UCLASS()
class ACharacterSelectionSwitcher : public AActor {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVictoryPoseChanged(UVictoryPose* VictoryPose);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVanityItemEquipped(EVanitySlot Slot);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Hide();
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    AActor* GetViewerActor() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    APlayerCharacter* GetActiveCharacter() const;
    
    ACharacterSelectionSwitcher();
};

