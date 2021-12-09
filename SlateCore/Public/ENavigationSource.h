#pragma once
#include "CoreMinimal.h"
#include "ENavigationSource.generated.h"

UENUM()
enum class ENavigationSource {
    FocusedWidget,
    WidgetUnderCursor,
};

