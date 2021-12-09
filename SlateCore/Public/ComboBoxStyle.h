#pragma once
#include "CoreMinimal.h"
#include "SlateWidgetStyle.h"
#include "ComboButtonStyle.h"
#include "SlateSound.h"
#include "ComboBoxStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FComboBoxStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FComboButtonStyle ComboButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateSound PressedSlateSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateSound SelectionChangeSlateSound;
    
    FComboBoxStyle();
};

