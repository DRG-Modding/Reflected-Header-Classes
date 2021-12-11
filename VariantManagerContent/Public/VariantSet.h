#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "VariantSet.generated.h"

class UVariant;

UCLASS(BlueprintType)
class VARIANTMANAGERCONTENT_API UVariantSet : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FText DisplayText;
    
    UPROPERTY()
    bool bExpanded;
    
    UPROPERTY()
    TArray<UVariant*> Variants;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDisplayText(const FText& NewDisplayText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVariant* GetVariantByName(const FString& VariantName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVariant* GetVariant(int32 VariantIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumVariants();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDisplayText() const;
    
    UVariantSet();
};

