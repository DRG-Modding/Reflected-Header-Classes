#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "DLCBase.generated.h"

class UDLCBase;

UCLASS(BlueprintType)
class FSD_API UDLCBase : public UDataAsset {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void QueryAllDLC();
    
    UFUNCTION(BlueprintPure)
    bool IsUnlocked() const;
    
    UFUNCTION(BlueprintPure)
    static bool IsDLCUnLocked(UDLCBase* dlc);
    
    UDLCBase();
};

