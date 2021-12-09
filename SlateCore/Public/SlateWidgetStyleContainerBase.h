#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "SlateWidgetStyleContainerInterface.h"
#include "SlateWidgetStyleContainerBase.generated.h"

UCLASS()
class SLATECORE_API USlateWidgetStyleContainerBase : public UObject, public ISlateWidgetStyleContainerInterface {
    GENERATED_BODY()
public:
    USlateWidgetStyleContainerBase();
};

