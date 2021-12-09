#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "ToolMenuBase.generated.h"

UCLASS(Abstract)
class SLATE_API UToolMenuBase : public UObject {
    GENERATED_BODY()
public:
    UToolMenuBase();
};

