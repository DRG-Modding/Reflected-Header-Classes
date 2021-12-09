#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "SavableActor.generated.h"

UCLASS()
class ASavableActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool EnableDangerousSaveGameIDEditing;
    
    UPROPERTY(EditAnywhere)
    FGuid SaveGameID;
    
public:
    ASavableActor();
};

