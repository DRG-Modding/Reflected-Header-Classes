#include "NiagaraVariableMetaData.h"

FNiagaraVariableMetaData::FNiagaraVariableMetaData() {
    this->bAdvancedDisplay = false;
    this->EditorSortPriority = 0;
    this->bInlineEditConditionToggle = false;
    this->Usage = ENiagaraScriptParameterUsage::Input;
    this->bIsStaticSwitch = false;
    this->StaticSwitchDefaultValue = 0;
    this->bAddedToNodeGraphDeepCopy = false;
    this->bOutputIsPersistent = false;
    this->bCreatedInSystemEditor = false;
    this->bUseLegacyNameString = false;
}

