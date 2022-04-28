#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EVerticalAlignment -FallbackName=EVerticalAlignment
#include "Widget.h"
#include "EDynamicBoxType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EHorizontalAlignment -FallbackName=EHorizontalAlignment
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "SlateChildSize.h"
#include "RadialBoxSettings.h"
#include "UserWidgetPool.h"
#include "DynamicEntryBoxBase.generated.h"

class UUserWidget;

UCLASS(Abstract, Blueprintable)
class UMG_API UDynamicEntryBoxBase : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDynamicBoxType EntryBoxType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D EntrySpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> SpacingPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateChildSize EntrySizeRule;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> EntryHorizontalAlignment;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EVerticalAlignment> EntryVerticalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxElementSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadialBoxSettings RadialBoxSettings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUserWidgetPool EntryWidgetPool;
    
public:
    UDynamicEntryBoxBase();
    UFUNCTION(BlueprintCallable)
    void SetRadialSettings(const FRadialBoxSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetEntrySpacing(const FVector2D& InEntrySpacing);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumEntries() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UUserWidget*> GetAllEntries() const;
    
};

