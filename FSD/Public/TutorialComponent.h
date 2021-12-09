#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "TutorialComponent.generated.h"

class APlayerCharacter;
class AFSDPlayerState;
class ATutorialManager;
class AFSDPlayerController;
class UFSDSaveGame;

UCLASS(Abstract, Blueprintable)
class UTutorialComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bTutorialEnabled;
    
    UPROPERTY(EditAnywhere)
    int32 Priority;
    
    UPROPERTY(EditAnywhere)
    float MaxDuration;
    
    UPROPERTY(EditAnywhere)
    int32 MaxViewCount;
    
    UPROPERTY(EditAnywhere)
    bool ShowInTutorialLevel;
    
    UPROPERTY(EditAnywhere)
    bool bAutoRegisterWithManager;
    
    UPROPERTY(EditAnywhere)
    bool bDebugAlwaysShow;
    
    UPROPERTY(EditAnywhere)
    bool ManuallyMarkViews;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<APlayerCharacter> PlayerCharacter;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<AFSDPlayerState> PlayerState;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<AFSDPlayerController> PlayerController;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<UFSDSaveGame> SaveGame;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<ATutorialManager> TutorialManager;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bTutorialInitialized;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bTutorialReady;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bTutorialVisible;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bTutorialActive;
    
public:
    UFUNCTION(BlueprintCallable)
    void RegisterTutorial();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnShown();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnInitialized();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveOnHidden();
    
    UFUNCTION()
    void OnTutorialsReset();
    
    UFUNCTION()
    void OnManagerReady(ATutorialManager* Manager);
    
    UFUNCTION(BlueprintCallable)
    void MarkTutorialWatched();
    
    UFUNCTION(BlueprintCallable)
    void MarkTutorialReadyNow();
    
    UFUNCTION(BlueprintCallable)
    void MarkTutorialReadyInSeconds(float Delay);
    
    UFUNCTION(BlueprintPure)
    bool HasTutorialBeenShown();
    
public:
    UFUNCTION(BlueprintNativeEvent)
    FString GetTutorialName() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CancelTutorial(bool CountAsViewed);
    
public:
    UTutorialComponent();
};

