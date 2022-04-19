#pragma once
#include "CoreMinimal.h"
#include "DatasmithSceneImportData.h"
#include "DatasmithGLTFSceneImportData.generated.h"

UCLASS(EditInlineNew)
class DATASMITHCONTENT_API UDatasmithGLTFSceneImportData : public UDatasmithSceneImportData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FString Generator;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float Version;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FString Author;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FString License;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FString Source;
    
    UDatasmithGLTFSceneImportData();
};

