#pragma once
#include "CoreMinimal.h"
#include "SupportedAreaData.generated.h"

USTRUCT(BlueprintType)
struct NAVIGATIONSYSTEM_API FSupportedAreaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString AreaClassName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 AreaID;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UClass* AreaClass;
    
    FSupportedAreaData();
};

