#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "StatHat.generated.h"

UCLASS(BlueprintType)
class UStatHat : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UStatHat();
    UFUNCTION(BlueprintCallable)
    void AddStatValue(const FString& Key, float Value);
    
    UFUNCTION(BlueprintCallable)
    void AddStatCount(const FString& Key, int32 count);
    
};

