#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BuilderBase.generated.h"

UCLASS(Blueprintable)
class UBuilderBase : public UObject {
    GENERATED_BODY()
public:
    UBuilderBase();
};

