#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPropertyValueCategory.h"
#include "CapturedPropSegment.h"
#include "PropertyValue.generated.h"

UCLASS(Blueprintable)
class VARIANTMANAGERCONTENT_API UPropertyValue : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TFieldPath<FProperty>> Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PropertyIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCapturedPropSegment> CapturedPropSegments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FullDisplayString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertySetterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> PropertySetterParameterDefaults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasRecordedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* LeafPropertyClass;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> ValueBytes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

