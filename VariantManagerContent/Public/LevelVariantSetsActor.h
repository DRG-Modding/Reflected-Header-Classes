#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: CoreUObject SoftObjectPath
#include "LevelVariantSetsActor.generated.h"

class ULevelVariantSets;

UCLASS()
class VARIANTMANAGERCONTENT_API ALevelVariantSetsActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSoftObjectPath LevelVariantSets;
    
    UFUNCTION(BlueprintCallable)
    bool SwitchOnVariantByName(const FString& VariantSetName, const FString& VariantName);
    
    UFUNCTION(BlueprintCallable)
    bool SwitchOnVariantByIndex(int32 VariantSetIndex, int32 VariantIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetLevelVariantSets(ULevelVariantSets* InVariantSets);
    
    UFUNCTION(BlueprintCallable)
    ULevelVariantSets* GetLevelVariantSets(bool bLoad);
    
    ALevelVariantSetsActor();
};

