#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ShowroomManager.generated.h"

class AShowroomStage;
class UTextureRenderTarget2D;
class UShowroomController;

UCLASS(BlueprintType)
class UShowroomManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector ShowroomLocation;
    
protected:
    UPROPERTY(Transient)
    TSubclassOf<AShowroomStage> CurrentStage;
    
    UPROPERTY(Transient)
    AShowroomStage* StageInstance;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UTextureRenderTarget2D* RenderTarget;
    
public:
    UFUNCTION(BlueprintPure)
    UShowroomController* GetController();
    
    UFUNCTION(BlueprintCallable)
    void ClearShowroom();
    
    UShowroomManager();
};

