#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
//CROSS-MODULE INCLUDE: CoreUObject RandomStream
#include "MissionNameBank.generated.h"

UCLASS(BlueprintType)
class UMissionNameBank : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FText> FirstNames;
    
    UPROPERTY(EditAnywhere)
    TArray<FText> LastNames;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetRandomGeneratedNames(UPARAM(Ref) FRandomStream& Random, int32 count) const;
    
    UMissionNameBank();
};

