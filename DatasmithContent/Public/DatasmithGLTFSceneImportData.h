#pragma once
#include "CoreMinimal.h"
#include "DatasmithSceneImportData.h"
#include "DatasmithGLTFSceneImportData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DATASMITHCONTENT_API UDatasmithGLTFSceneImportData : public UDatasmithSceneImportData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Generator;
    
    UPROPERTY(EditAnywhere)
    float Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Author;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString License;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Source;
    
    UDatasmithGLTFSceneImportData();
};

