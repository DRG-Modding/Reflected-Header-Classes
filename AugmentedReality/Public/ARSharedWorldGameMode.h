#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine GameMode
#include "ARSharedWorldGameMode.generated.h"

class AARSharedWorldGameState;

UCLASS(NonTransient)
class AUGMENTEDREALITY_API AARSharedWorldGameMode : public AGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    int32 BufferSizePerChunk;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPreviewImageData(TArray<uint8> ImageData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetARWorldSharingIsReady();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetARSharedWorldData(TArray<uint8> ARWorldData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AARSharedWorldGameState* GetARSharedWorldGameState();
    
    AARSharedWorldGameMode();
};

