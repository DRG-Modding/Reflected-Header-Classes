#pragma once
#include "CoreMinimal.h"
#include "ESlateDebuggingInputEvent.generated.h"

UENUM()
enum class ESlateDebuggingInputEvent {
    MouseMove,
    MouseEnter,
    MouseLeave,
    MouseButtonDown,
    MouseButtonUp,
    MouseButtonDoubleClick,
    MouseWheel,
    TouchStart,
    TouchEnd,
    DragDetected,
    DragEnter,
    DragLeave,
    DragOver,
    DragDrop,
    DropMessage,
    KeyDown,
    KeyUp,
    KeyChar,
    AnalogInput,
    TouchGesture,
    COUNT,
};

