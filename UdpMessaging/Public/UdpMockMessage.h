#pragma once
#include "CoreMinimal.h"
#include "UdpMockMessage.generated.h"

USTRUCT()
struct FUdpMockMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<uint8> Data;
    
    UDPMESSAGING_API FUdpMockMessage();
};

