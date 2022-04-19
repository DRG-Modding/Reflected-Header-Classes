#pragma once
#include "CoreMinimal.h"
#include "FieldSystemMetaData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EFieldFilterType -FallbackName=EFieldFilterType
#include "FieldSystemMetaDataFilter.generated.h"

class UFieldSystemMetaDataFilter;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UFieldSystemMetaDataFilter : public UFieldSystemMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFieldFilterType> FilterType;
    
    UFieldSystemMetaDataFilter();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFieldSystemMetaDataFilter* SetMetaDataFilterType(TEnumAsByte<EFieldFilterType> NewFilterType);
    
};

