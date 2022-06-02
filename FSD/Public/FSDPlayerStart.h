#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "FSDPlayerStart.generated.h"

class UPlayerCharacterID;
class AFSDPlayerController;

UCLASS(Blueprintable)
class AFSDPlayerStart : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* PrefferedClassID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFSDPlayerController* usedBy;
    
    AFSDPlayerStart();
};

