#pragma once
#include "CoreMinimal.h"
#include "Widget.h"
#include "ComboBox.generated.h"

class UObject;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(UWidget*, FComboBoxOnGenerateWidgetEvent, UObject*, Item);

UCLASS()
class UMG_API UComboBox : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UObject*> Items;
    
    UPROPERTY(EditAnywhere)
    FComboBoxOnGenerateWidgetEvent OnGenerateWidgetEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsFocusable;
    
    UComboBox();
};

