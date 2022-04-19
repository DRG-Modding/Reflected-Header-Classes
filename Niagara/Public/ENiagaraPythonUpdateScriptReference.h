#pragma once
#include "CoreMinimal.h"
#include "ENiagaraPythonUpdateScriptReference.generated.h"

UENUM()
enum class ENiagaraPythonUpdateScriptReference {
    None,
    ScriptAsset,
    DirectTextEntry,
};

