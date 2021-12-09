#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "AISenseEvent.generated.h"

UCLASS(Abstract, EditInlineNew, Config=Game)
class AIMODULE_API UAISenseEvent : public UObject {
    GENERATED_BODY()
public:
    UAISenseEvent();
};

