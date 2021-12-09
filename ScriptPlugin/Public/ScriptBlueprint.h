#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Blueprint
#include "ScriptBlueprint.generated.h"

UCLASS()
class SCRIPTPLUGIN_API UScriptBlueprint : public UBlueprint {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<uint8> ByteCode;
    
    UPROPERTY()
    FString SourceCode;
    
    UScriptBlueprint();
};

