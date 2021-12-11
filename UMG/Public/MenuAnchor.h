#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "ContentWidget.h"
//CROSS-MODULE INCLUDE: SlateCore EMenuPlacement
#include "MenuAnchor.generated.h"

class UWidget;
class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal(UWidget*, FMenuAnchorOnGetMenuContentEvent);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMenuAnchorOnMenuOpenChanged, bool, bIsOpen);

UCLASS()
class UMG_API UMenuAnchor : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UUserWidget> MenuClass;
    
    UPROPERTY(EditAnywhere)
    FMenuAnchorOnGetMenuContentEvent OnGetMenuContentEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EMenuPlacement> Placement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bFitInWindow;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool ShouldDeferPaintingAfterWindowContent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool UseApplicationMenuStack;
    
    UPROPERTY(BlueprintAssignable)
    FMenuAnchorOnMenuOpenChanged OnMenuOpenChanged;
    
    UFUNCTION(BlueprintCallable)
    void ToggleOpen(bool bFocusOnOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldOpenDueToClick() const;
    
    UFUNCTION(BlueprintCallable)
    void SetPlacement(TEnumAsByte<EMenuPlacement> InPlacement);
    
    UFUNCTION(BlueprintCallable)
    void Open(bool bFocusMenu);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasOpenSubMenus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetMenuPosition() const;
    
    UFUNCTION(BlueprintCallable)
    void FitInWindow(bool bFit);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UMenuAnchor();
};

