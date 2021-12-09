#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DynamicEntryBoxBase.h"
#include "DynamicEntryBox.generated.h"

class UUserWidget;

UCLASS()
class UMG_API UDynamicEntryBox : public UDynamicEntryBoxBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> EntryWidgetClass;
    
public:
    UFUNCTION(BlueprintCallable)
    void Reset(bool bDeleteWidgets);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEntry(UUserWidget* EntryWidget);
    
private:
    UFUNCTION(BlueprintCallable)
    UUserWidget* BP_CreateEntryOfClass(TSubclassOf<UUserWidget> EntryClass);
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* BP_CreateEntry();
    
public:
    UDynamicEntryBox();
};

