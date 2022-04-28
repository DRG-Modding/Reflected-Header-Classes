#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameState -FallbackName=GameState
#include "ARSharedWorldGameState.generated.h"

UCLASS(Blueprintable)
class AUGMENTEDREALITY_API AARSharedWorldGameState : public AGameState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<uint8> PreviewImageData;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> ARWorldData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviewImageBytesTotal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ARWorldBytesTotal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviewImageBytesDelivered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ARWorldBytesDelivered;
    
    AARSharedWorldGameState();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnARWorldMapIsReady();
    
};

