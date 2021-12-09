#pragma once
#include "CoreMinimal.h"
#include "SupportedAreaData.generated.h"

USTRUCT(BlueprintType)
struct NAVIGATIONSYSTEM_API FSupportedAreaData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString AreaClassName;
    
    UPROPERTY()
    int32 AreaID;
    
    UPROPERTY(Transient)
    UClass* AreaClass;
    
    FSupportedAreaData();
};

