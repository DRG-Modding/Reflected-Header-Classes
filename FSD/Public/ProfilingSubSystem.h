#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine WorldSubsystem
#include "ProfileEntry.h"
#include "ProfileCategoryTiming.h"
#include "ProfilingSubSystem.generated.h"

UCLASS(BlueprintType)
class UProfilingSubSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<FProfileEntry> Entries;
    
public:
    UFUNCTION(BlueprintPure)
    float GetTotalTime() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FProfileEntry> GetEntries() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FProfileCategoryTiming> GetCategoryTimings() const;
    
    UProfilingSubSystem();
};

