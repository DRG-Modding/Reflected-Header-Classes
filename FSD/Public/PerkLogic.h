#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "PerkLogic.generated.h"

class APlayerCharacter;

UCLASS(Abstract, Blueprintable)
class UPerkLogic : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void StartLogic(int32 Rank);
    
    UFUNCTION(BlueprintPure)
    APlayerCharacter* GetCharacter() const;
    
public:
    UFUNCTION(BlueprintNativeEvent)
    FText GetAdditionalText(int32 Rank) const;
    
    UPerkLogic();
};

