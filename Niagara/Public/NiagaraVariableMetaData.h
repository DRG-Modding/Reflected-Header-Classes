#pragma once
#include "CoreMinimal.h"
#include "NiagaraInputConditionMetadata.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "NiagaraVariableMetaData.generated.h"

USTRUCT()
struct NIAGARA_API FNiagaraVariableMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdvancedDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EditorSortPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInlineEditConditionToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraInputConditionMetadata EditCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraInputConditionMetadata VisibleCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> PropertyMetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParentAttribute;
    
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid VariableGuid;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bIsStaticSwitch;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 StaticSwitchDefaultValue;
    
public:
    FNiagaraVariableMetaData();
};

