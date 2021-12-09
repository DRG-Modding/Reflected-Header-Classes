#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: FieldSystemCore EFieldResolutionType
#include "FieldSystemMetaData.h"
#include "FieldSystemMetaDataProcessingResolution.generated.h"

class UFieldSystemMetaDataProcessingResolution;

UCLASS(BlueprintType)
class FIELDSYSTEMENGINE_API UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EFieldResolutionType> ResolutionType;
    
    UFUNCTION(BlueprintPure)
    UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(TEnumAsByte<EFieldResolutionType> NewResolutionType);
    
    UFieldSystemMetaDataProcessingResolution();
};

