#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "ObjectInfoComponent.generated.h"

class UDialogDataAsset;
class UPrimitiveComponent;
class UActorContextWidget;
class UTexture2D;
class APlayerController;

UCLASS(Abstract, BlueprintType)
class UObjectInfoComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    UDialogDataAsset* GetLookAtShout(const UPrimitiveComponent* TargetComponent) const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsPingableByLaserpointer(const UPrimitiveComponent* TargetComponent) const;
    
    UFUNCTION(BlueprintPure)
    FText GetInGameName(const UPrimitiveComponent* TargetComponent) const;
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetInGameIcon(const UPrimitiveComponent* TargetComponent) const;
    
    UFUNCTION(BlueprintPure)
    FText GetInGameDescription(const UPrimitiveComponent* TargetComponent) const;
    
    UFUNCTION(BlueprintCallable)
    UActorContextWidget* GetContextWidget(APlayerController* InPlayerController);
    
    UObjectInfoComponent();
};

