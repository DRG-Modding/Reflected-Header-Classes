#pragma once
#include "CoreMinimal.h"
#include "DatasmithStaticMeshImportData.h"
#include "DatasmithStaticMeshIFCImportData.generated.h"

UCLASS(EditInlineNew)
class DATASMITHCONTENT_API UDatasmithStaticMeshIFCImportData : public UDatasmithStaticMeshImportData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FString SourceGlobalId;
    
    UDatasmithStaticMeshIFCImportData();
};

