#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CapturedPropSegment.h"
#include "EPropertyValueCategory.h"
#include "PropertyValue.generated.h"

UCLASS(BlueprintType)
class VARIANTMANAGERCONTENT_API UPropertyValue : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<TFieldPath<FProperty>> Properties;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<int32> PropertyIndices;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FCapturedPropSegment> CapturedPropSegments;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString FullDisplayString;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName PropertySetterName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> PropertySetterParameterDefaults;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bHasRecordedData;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UClass* LeafPropertyClass;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<uint8> ValueBytes;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EPropertyValueCategory PropCategory;
    
public:
    UPropertyValue();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRecordedData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPropertyTooltip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFullDisplayString() const;
    
};

