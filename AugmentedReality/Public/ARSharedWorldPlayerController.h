#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine PlayerController
#include "ARSharedWorldPlayerController.generated.h"

UCLASS()
class AUGMENTEDREALITY_API AARSharedWorldPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerMarkReadyForReceiving();
    
    UFUNCTION(Client, Reliable, WithValidation)
    void ClientUpdatePreviewImageData(int32 Offset, const TArray<uint8>& Buffer);
    
    UFUNCTION(Client, Reliable, WithValidation)
    void ClientUpdateARWorldData(int32 Offset, const TArray<uint8>& Buffer);
    
    UFUNCTION(Client, Reliable, WithValidation)
    void ClientInitSharedWorld(int32 PreviewImageSize, int32 ARWorldDataSize);
    
    AARSharedWorldPlayerController();
};

