#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "BossFightInterface.generated.h"

class AActor;
class UBossFightWidget;

UINTERFACE(Blueprintable)
class UBossFightInterface : public UInterface {
    GENERATED_BODY()
};

class IBossFightInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsStillValid();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<UBossFightWidget> GetWidgetClass();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* GetBossActor();
    
};

