#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "FSDPlayerStart.generated.h"

class UPlayerCharacterID;
class AFSDPlayerController;

UCLASS()
class AFSDPlayerStart : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPlayerCharacterID* PrefferedClassID;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    AFSDPlayerController* usedBy;
    
    AFSDPlayerStart();
};

