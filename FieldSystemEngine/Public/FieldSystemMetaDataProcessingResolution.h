#pragma once
#include "CoreMinimal.h"
#include "FieldSystemMetaData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=EFieldResolutionType -FallbackName=EFieldResolutionType
#include "FieldSystemMetaDataProcessingResolution.generated.h"

class UFieldSystemMetaDataProcessingResolution;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EFieldResolutionType> ResolutionType;
    
    UFieldSystemMetaDataProcessingResolution();
    UFUNCTION(BlueprintPure)
    UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(TEnumAsByte<EFieldResolutionType> NewResolutionType);
    
};

