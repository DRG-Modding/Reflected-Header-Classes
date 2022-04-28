#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ARActor.generated.h"

class UARComponent;

UCLASS(Blueprintable)
class AUGMENTEDREALITY_API AARActor : public AActor {
    GENERATED_BODY()
public:
    AARActor();
    UFUNCTION(BlueprintCallable)
    UARComponent* AddARComponent(TSubclassOf<UARComponent> InComponentClass, const FGuid& NativeID);
    
};

