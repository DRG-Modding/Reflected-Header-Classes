#pragma once
#include "CoreMinimal.h"
#include "DatasmithSceneImportData.h"
#include "DatasmithGLTFSceneImportData.generated.h"

UCLASS(EditInlineNew)
class DATASMITHCONTENT_API UDatasmithGLTFSceneImportData : public UDatasmithSceneImportData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString Generator;
    
    UPROPERTY(VisibleAnywhere)
    float Version;
    
    UPROPERTY(VisibleAnywhere)
    FString Author;
    
    UPROPERTY(VisibleAnywhere)
    FString License;
    
    UPROPERTY(VisibleAnywhere)
    FString Source;
    
    UDatasmithGLTFSceneImportData();
};

