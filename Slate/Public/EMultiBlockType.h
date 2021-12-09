#pragma once
#include "CoreMinimal.h"
#include "EMultiBlockType.generated.h"

UENUM()
enum class EMultiBlockType {
    None,
    ButtonRow,
    EditableText,
    Heading,
    MenuEntry,
    MenuSeparator,
    ToolBarButton,
    ToolBarComboButton,
    ToolBarSeparator,
    Widget,
};

