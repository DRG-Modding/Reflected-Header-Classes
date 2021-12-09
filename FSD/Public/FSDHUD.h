#pragma once
#include "CoreMinimal.h"
#include "EHUDVisibilityReason.h"
//CROSS-MODULE INCLUDE: Engine HUD
#include "FSDHUD.generated.h"

class APlayerController;
class URadarPointComponent;
class APlayerCharacter;
class AFSDHUD;
class APlayerCameraDrone;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDHUDSetObjectivesVisible, bool, InVisible, bool, animate);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDHUDOnHUDVisibilityChanged, bool, InHudVisible);

UCLASS(NonTransient)
class AFSDHUD : public AHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FFSDHUDSetObjectivesVisible SetObjectivesVisible;
    
    UPROPERTY(BlueprintAssignable)
    FFSDHUDOnHUDVisibilityChanged OnHUDVisibilityChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 IsVisibleFlags;
    
public:
    UFUNCTION(BlueprintCallable)
    bool ToggleHUDVisibility(EHUDVisibilityReason reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowObjectives(bool InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetHUDVisible(bool IsVisible, EHUDVisibilityReason reason);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RadarPointAdded(URadarPointComponent* radarPoint);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayerSpawned(APlayerCharacter* Player);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnVisibilityChanged();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsHUDVisibleFlagSet(EHUDVisibilityReason reason) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleSeamlessTravel();
    
    UFUNCTION(BlueprintPure)
    bool GetHUDVisible() const;
    
    UFUNCTION(BlueprintPure)
    static AFSDHUD* GetFSDHUD(APlayerController* InPlayerController);
    
    UFUNCTION(BlueprintImplementableEvent)
    void CameraDroneSpawned(APlayerCameraDrone* Drone);
    
    AFSDHUD();
};

