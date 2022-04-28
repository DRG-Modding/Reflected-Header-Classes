#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Blueprint -FallbackName=Blueprint
#include "ScriptBlueprint.generated.h"

UCLASS(Blueprintable)
class SCRIPTPLUGIN_API UScriptBlueprint : public UBlueprint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<uint8> ByteCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SourceCode;
    
    UScriptBlueprint();
};

