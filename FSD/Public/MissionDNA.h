#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagQuery
#include "MissionDNA.generated.h"

class UMissionComplexity;
class UMissionDuration;

UCLASS(Abstract, BlueprintType)
class UMissionDNA : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MissionScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Weight;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionComplexity* Complexity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionDuration* Duration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FGameplayTagQuery> RoomQueries;
    
public:
    UFUNCTION(BlueprintPure)
    float GetDurationHazardBonus() const;
    
    UFUNCTION(BlueprintPure)
    float GetComplexityHazardBonus() const;
    
    UMissionDNA();
};

