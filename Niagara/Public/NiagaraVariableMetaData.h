#pragma once
#include "CoreMinimal.h"
#include "NiagaraInputConditionMetadata.h"
#include "ENiagaraScriptParameterUsage.h"
#include "NiagaraVariableMetaData.generated.h"

USTRUCT()
struct NIAGARA_API FNiagaraVariableMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText Description;
    
    UPROPERTY(EditAnywhere)
    FText CategoryName;
    
    UPROPERTY(EditAnywhere)
    bool bAdvancedDisplay;
    
    UPROPERTY(EditAnywhere)
    int32 EditorSortPriority;
    
    UPROPERTY(EditAnywhere)
    bool bInlineEditConditionToggle;
    
    UPROPERTY(EditAnywhere)
    FNiagaraInputConditionMetadata EditCondition;
    
    UPROPERTY(EditAnywhere)
    FNiagaraInputConditionMetadata VisibleCondition;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FString> PropertyMetaData;
    
private:
    UPROPERTY()
    FName ScopeName;
    
    UPROPERTY()
    ENiagaraScriptParameterUsage Usage;
    
    UPROPERTY()
    bool bIsStaticSwitch;
    
    UPROPERTY()
    int32 StaticSwitchDefaultValue;
    
    UPROPERTY(Transient)
    bool bAddedToNodeGraphDeepCopy;
    
    UPROPERTY()
    bool bOutputIsPersistent;
    
    UPROPERTY()
    FName CachedNamespacelessVariableName;
    
    UPROPERTY()
    bool bCreatedInSystemEditor;
    
    UPROPERTY()
    bool bUseLegacyNameString;
    
public:
    FNiagaraVariableMetaData();
};

