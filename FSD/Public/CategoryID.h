#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "SaveGameIDInterface.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "CategoryID.generated.h"

UCLASS()
class FSD_API UCategoryID : public UDataAsset, public ISaveGameIDInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGuid SaveGameID;
    
public:
    UCategoryID();
};

