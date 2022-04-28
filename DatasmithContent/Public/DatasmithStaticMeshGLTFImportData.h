#pragma once
#include "CoreMinimal.h"
#include "DatasmithStaticMeshImportData.h"
#include "DatasmithStaticMeshGLTFImportData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DATASMITHCONTENT_API UDatasmithStaticMeshGLTFImportData : public UDatasmithStaticMeshImportData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SourceMeshName;
    
    UDatasmithStaticMeshGLTFImportData();
};

