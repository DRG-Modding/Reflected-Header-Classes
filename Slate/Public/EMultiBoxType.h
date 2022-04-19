#pragma once
#include "CoreMinimal.h"
#include "EMultiBoxType.generated.h"

UENUM()
enum class EMultiBoxType {
    MenuBar,
    ToolBar,
    VerticalToolBar,
    UniformToolBar,
    Menu,
    ButtonRow,
};

