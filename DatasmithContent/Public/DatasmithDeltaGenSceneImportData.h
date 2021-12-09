#pragma once
#include "CoreMinimal.h"
#include "DatasmithFBXSceneImportData.h"
#include "DatasmithDeltaGenSceneImportData.generated.h"

UCLASS(EditInlineNew)
class DATASMITHCONTENT_API UDatasmithDeltaGenSceneImportData : public UDatasmithFBXSceneImportData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    bool bMergeNodes;
    
    UPROPERTY(VisibleAnywhere)
    bool bOptimizeDuplicatedNodes;
    
    UPROPERTY(VisibleAnywhere)
    bool bRemoveInvisibleNodes;
    
    UPROPERTY(VisibleAnywhere)
    bool bSimplifyNodeHierarchy;
    
    UPROPERTY(VisibleAnywhere)
    bool bImportVar;
    
    UPROPERTY(VisibleAnywhere)
    FString VarPath;
    
    UPROPERTY(VisibleAnywhere)
    bool bImportPos;
    
    UPROPERTY(VisibleAnywhere)
    FString PosPath;
    
    UPROPERTY(VisibleAnywhere)
    bool bImportTml;
    
    UPROPERTY(VisibleAnywhere)
    FString TmlPath;
    
    UDatasmithDeltaGenSceneImportData();
};

