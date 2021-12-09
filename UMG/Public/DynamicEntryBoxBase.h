#pragma once
#include "CoreMinimal.h"
#include "EDynamicBoxType.h"
#include "Widget.h"
#include "SlateChildSize.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: SlateCore EVerticalAlignment
//CROSS-MODULE INCLUDE: SlateCore EHorizontalAlignment
#include "UserWidgetPool.h"
#include "DynamicEntryBoxBase.generated.h"

class UUserWidget;

UCLASS(Abstract)
class UMG_API UDynamicEntryBoxBase : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EDynamicBoxType EntryBoxType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D EntrySpacing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FVector2D> SpacingPattern;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateChildSize EntrySizeRule;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> EntryHorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> EntryVerticalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxElementSize;
    
private:
    UPROPERTY(Transient)
    FUserWidgetPool EntryWidgetPool;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetEntrySpacing(const FVector2D& InEntrySpacing);
    
    UFUNCTION(BlueprintPure)
    int32 GetNumEntries() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UUserWidget*> GetAllEntries() const;
    
    UDynamicEntryBoxBase();
};

