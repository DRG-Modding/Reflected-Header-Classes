#pragma once
#include "CoreMinimal.h"
#include "DatasmithStaticMeshImportData.h"
#include "DatasmithStaticMeshGLTFImportData.generated.h"

UCLASS(EditInlineNew)
class DATASMITHCONTENT_API UDatasmithStaticMeshGLTFImportData : public UDatasmithStaticMeshImportData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FString SourceMeshName;
    
    UDatasmithStaticMeshGLTFImportData();
};

