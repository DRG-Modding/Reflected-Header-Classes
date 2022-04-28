#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TutorialManager.generated.h"

class AFSDPlayerController;
class APlayerCharacter;
class UFSDSaveGame;
class UTutorialComponent;

UCLASS(Abstract, Blueprintable)
class ATutorialManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float MinimumTimeBetweenTutorials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResetTutorialsOnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowTutorialsDebug;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AFSDPlayerController> PlayerController;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<APlayerCharacter> PlayerCharacter;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<UFSDSaveGame> SaveGame;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TArray<TWeakObjectPtr<UTutorialComponent>> Tutorials;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UTutorialComponent> ActiveTutorial;
    
public:
    ATutorialManager();
};

