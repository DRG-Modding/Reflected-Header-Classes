#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SentryAttachment.generated.h"

UCLASS(Abstract)
class ASentryAttachment : public AActor {
    GENERATED_BODY()
public:
    ASentryAttachment();
};

