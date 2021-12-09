#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine GameInstanceSubsystem
#include "StatHat.generated.h"

UCLASS(BlueprintType)
class UStatHat : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void AddStatValue(const FString& Key, float Value);
    
    UFUNCTION(BlueprintCallable)
    void AddStatCount(const FString& Key, int32 count);
    
    UStatHat();
};

