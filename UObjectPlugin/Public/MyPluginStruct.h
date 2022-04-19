#pragma once
#include "CoreMinimal.h"
#include "MyPluginStruct.generated.h"

USTRUCT(BlueprintType)
struct FMyPluginStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString TestString;
    
    UOBJECTPLUGIN_API FMyPluginStruct();
};

