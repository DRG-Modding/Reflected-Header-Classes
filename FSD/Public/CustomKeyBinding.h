#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: InputCore Key
#include "CustomKeyBinding.generated.h"

USTRUCT(BlueprintType)
struct FCustomKeyBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FKey Key;
    
    FSD_API FCustomKeyBinding();
};

