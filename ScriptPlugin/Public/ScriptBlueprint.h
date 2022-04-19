#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Blueprint -FallbackName=Blueprint
#include "ScriptBlueprint.generated.h"

UCLASS()
class SCRIPTPLUGIN_API UScriptBlueprint : public UBlueprint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<uint8> ByteCode;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString SourceCode;
    
    UScriptBlueprint();
};

