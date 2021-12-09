#pragma once
#include "CoreMinimal.h"
#include "SteamVRActionSet.generated.h"

USTRUCT(BlueprintType)
struct STEAMVRINPUTDEVICE_API FSteamVRActionSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Path;
    
    FSteamVRActionSet();
};

