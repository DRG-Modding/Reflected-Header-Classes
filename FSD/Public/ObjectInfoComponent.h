#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "ObjectInfoComponent.generated.h"

class UDialogDataAsset;
class UPrimitiveComponent;
class UActorContextWidget;
class APlayerController;
class UTexture2D;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UObjectInfoComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UObjectInfoComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDialogDataAsset* GetLookAtShout(const UPrimitiveComponent* TargetComponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPingableByLaserpointer(const UPrimitiveComponent* TargetComponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetInGameName(const UPrimitiveComponent* TargetComponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetInGameIconTint(const UPrimitiveComponent* TargetComponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetInGameIcon(const UPrimitiveComponent* TargetComponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetInGameDescription(const UPrimitiveComponent* TargetComponent) const;
    
    UFUNCTION(BlueprintCallable)
    UActorContextWidget* GetContextWidget(APlayerController* InPlayerController);
    
};

