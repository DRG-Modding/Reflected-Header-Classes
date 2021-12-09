#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject SoftObjectPath
#include "FunctionCaller.h"
#include "VariantObjectBinding.generated.h"

class UPropertyValue;

UCLASS(DefaultToInstanced)
class VARIANTMANAGERCONTENT_API UVariantObjectBinding : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FString CachedActorLabel;
    
    UPROPERTY()
    FSoftObjectPath ObjectPtr;
    
    UPROPERTY()
    TLazyObjectPtr<UObject> LazyObjectPtr;
    
    UPROPERTY()
    TArray<UPropertyValue*> CapturedProperties;
    
    UPROPERTY()
    TArray<FFunctionCaller> FunctionCallers;
    
public:
    UVariantObjectBinding();
};

