#pragma once
#include "CoreMinimal.h"
#include "DatasmithFBXSceneImportData.h"
#include "DatasmithVREDSceneImportData.generated.h"

UCLASS(EditInlineNew)
class DATASMITHCONTENT_API UDatasmithVREDSceneImportData : public UDatasmithFBXSceneImportData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    bool bMergeNodes;
    
    UPROPERTY(VisibleAnywhere)
    bool bOptimizeDuplicatedNodes;
    
    UPROPERTY(VisibleAnywhere)
    bool bImportMats;
    
    UPROPERTY(VisibleAnywhere)
    FString MatsPath;
    
    UPROPERTY(VisibleAnywhere)
    bool bImportVar;
    
    UPROPERTY(VisibleAnywhere)
    bool bCleanVar;
    
    UPROPERTY(VisibleAnywhere)
    FString VarPath;
    
    UPROPERTY(VisibleAnywhere)
    bool bImportLightInfo;
    
    UPROPERTY(VisibleAnywhere)
    FString LightInfoPath;
    
    UPROPERTY(VisibleAnywhere)
    bool bImportClipInfo;
    
    UPROPERTY(VisibleAnywhere)
    FString ClipInfoPath;
    
    UDatasmithVREDSceneImportData();
};

