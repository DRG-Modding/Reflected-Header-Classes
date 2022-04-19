#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LevelVariantSets.generated.h"

class UVariantSet;

UCLASS(BlueprintType)
class VARIANTMANAGERCONTENT_API ULevelVariantSets : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UClass* DirectorClass;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<UVariantSet*> VariantSets;
    
public:
    ULevelVariantSets();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVariantSet* GetVariantSetByName(const FString& VariantSetName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVariantSet* GetVariantSet(int32 VariantSetIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumVariantSets();
    
};

