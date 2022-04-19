#pragma once
#include "CoreMinimal.h"
#include "ESlateDebuggingInputEvent.generated.h"

UENUM()
enum class ESlateDebuggingInputEvent {
    MouseMove,
    MouseEnter,
    MouseLeave,
    PreviewMouseButtonDown,
    MouseButtonDown,
    MouseButtonUp,
    MouseButtonDoubleClick,
    MouseWheel,
    TouchStart,
    TouchEnd,
    TouchForceChanged,
    TouchFirstMove,
    TouchMoved,
    DragDetected,
    DragEnter,
    DragLeave,
    DragOver,
    DragDrop,
    DropMessage,
    PreviewKeyDown,
    KeyDown,
    KeyUp,
    KeyChar,
    AnalogInput,
    TouchGesture,
    MotionDetected,
    MAX,
};

