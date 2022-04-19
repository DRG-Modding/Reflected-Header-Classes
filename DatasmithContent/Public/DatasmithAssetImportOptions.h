#pragma once
#include "CoreMinimal.h"
#include "DatasmithAssetImportOptions.generated.h"

USTRUCT(BlueprintType)
struct DATASMITHCONTENT_API FDatasmithAssetImportOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName PackagePath;
    
    FDatasmithAssetImportOptions();
};

