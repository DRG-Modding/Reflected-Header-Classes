#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintGeneratedClass
#include "ScriptBlueprintGeneratedClass.generated.h"

class UProperty;

UCLASS()
class SCRIPTPLUGIN_API UScriptBlueprintGeneratedClass : public UBlueprintGeneratedClass {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<uint8> ByteCode;
    
    UPROPERTY()
    FString SourceCode;
    
    UPROPERTY()
    TArray<UProperty*> ScriptProperties;
    
    UScriptBlueprintGeneratedClass();
};

