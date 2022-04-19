#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DLCBase.generated.h"

class UDLCBase;

UCLASS(BlueprintType)
class FSD_API UDLCBase : public UDataAsset {
    GENERATED_BODY()
public:
    UDLCBase();
    UFUNCTION(BlueprintCallable)
    static void QueryAllDLC();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDLCUnLocked(UDLCBase* dlc);
    
};

