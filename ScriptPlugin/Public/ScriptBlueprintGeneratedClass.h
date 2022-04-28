#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintGeneratedClass -FallbackName=BlueprintGeneratedClass
#include "ScriptBlueprintGeneratedClass.generated.h"

class UProperty;

UCLASS(Blueprintable)
class SCRIPTPLUGIN_API UScriptBlueprintGeneratedClass : public UBlueprintGeneratedClass {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<uint8> ByteCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SourceCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UProperty*> ScriptProperties;
    
    UScriptBlueprintGeneratedClass();
};

