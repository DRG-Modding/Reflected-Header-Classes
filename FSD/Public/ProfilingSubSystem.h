#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "ProfileEntry.h"
#include "ProfileCategoryTiming.h"
#include "ProfilingSubSystem.generated.h"

UCLASS(BlueprintType)
class UProfilingSubSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FProfileEntry> Entries;
    
public:
    UProfilingSubSystem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FProfileEntry> GetEntries() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FProfileCategoryTiming> GetCategoryTimings() const;
    
};

