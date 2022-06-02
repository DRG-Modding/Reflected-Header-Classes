#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
#include "MissionDNA.generated.h"

class UMissionComplexity;
class UMissionDuration;

UCLASS(Abstract, Blueprintable)
class UMissionDNA : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MissionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionComplexity* Complexity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionDuration* Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTagQuery> RoomQueries;
    
public:
    UMissionDNA();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDurationHazardBonus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetComplexityHazardBonus() const;
    
};

