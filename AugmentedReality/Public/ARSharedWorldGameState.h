#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameState -FallbackName=GameState
#include "ARSharedWorldGameState.generated.h"

UCLASS()
class AUGMENTEDREALITY_API AARSharedWorldGameState : public AGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<uint8> PreviewImageData;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<uint8> ARWorldData;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 PreviewImageBytesTotal;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 ARWorldBytesTotal;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 PreviewImageBytesDelivered;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 ARWorldBytesDelivered;
    
    AARSharedWorldGameState();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnARWorldMapIsReady();
    
};

