#pragma once
#include "CoreMinimal.h"
#include "ExampleStruct.generated.h"

USTRUCT()
struct FExampleStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float Field;
    
    FSD_API FExampleStruct();
};

