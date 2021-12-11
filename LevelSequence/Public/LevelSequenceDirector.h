#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "LevelSequenceDirector.generated.h"

class ULevelSequencePlayer;

UCLASS(Blueprintable)
class LEVELSEQUENCE_API ULevelSequenceDirector : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    ULevelSequencePlayer* Player;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreated();
    
    ULevelSequenceDirector();
};

