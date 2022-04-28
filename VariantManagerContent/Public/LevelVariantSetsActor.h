#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "LevelVariantSetsActor.generated.h"

class ULevelVariantSetsFunctionDirector;
class ULevelVariantSets;

UCLASS(Blueprintable)
class VARIANTMANAGERCONTENT_API ALevelVariantSetsActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath LevelVariantSets;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UClass*, ULevelVariantSetsFunctionDirector*> DirectorInstances;
    
public:
    ALevelVariantSetsActor();
    UFUNCTION(BlueprintCallable)
    bool SwitchOnVariantByName(const FString& VariantSetName, const FString& VariantName);
    
    UFUNCTION(BlueprintCallable)
    bool SwitchOnVariantByIndex(int32 VariantSetIndex, int32 VariantIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetLevelVariantSets(ULevelVariantSets* InVariantSets);
    
    UFUNCTION(BlueprintCallable)
    ULevelVariantSets* GetLevelVariantSets(bool bLoad);
    
};

