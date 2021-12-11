#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine GameState
#include "ARSharedWorldGameState.generated.h"

UCLASS()
class AUGMENTEDREALITY_API AARSharedWorldGameState : public AGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<uint8> PreviewImageData;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<uint8> ARWorldData;
    
    UPROPERTY(BlueprintReadOnly)
    int32 PreviewImageBytesTotal;
    
    UPROPERTY(BlueprintReadOnly)
    int32 ARWorldBytesTotal;
    
    UPROPERTY(BlueprintReadOnly)
    int32 PreviewImageBytesDelivered;
    
    UPROPERTY(BlueprintReadOnly)
    int32 ARWorldBytesDelivered;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnARWorldMapIsReady();
    
    AARSharedWorldGameState();
};

