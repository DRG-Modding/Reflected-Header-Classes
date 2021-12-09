#pragma once
#include "CoreMinimal.h"
#include "PIELoginSettingsInternal.generated.h"

USTRUCT(BlueprintType)
struct FPIELoginSettingsInternal {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString ID;
    
    UPROPERTY(EditAnywhere, Transient)
    FString Token;
    
    UPROPERTY(EditAnywhere)
    FString Type;
    
    UPROPERTY()
    TArray<uint8> TokenBytes;
    
    ONLINESUBSYSTEMUTILS_API FPIELoginSettingsInternal();
};

