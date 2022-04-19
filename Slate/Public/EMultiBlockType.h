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
    Separator,
    ToolBarButton,
    ToolBarComboButton,
    Widget,
};

