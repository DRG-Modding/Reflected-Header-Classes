#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "FunctionCaller.h"
#include "VariantObjectBinding.generated.h"

class UPropertyValue;

UCLASS(DefaultToInstanced)
class VARIANTMANAGERCONTENT_API UVariantObjectBinding : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString CachedActorLabel;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TLazyObjectPtr<UObject> LazyObjectPtr;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<UPropertyValue*> CapturedProperties;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FFunctionCaller> FunctionCallers;
    
public:
    UVariantObjectBinding();
};

