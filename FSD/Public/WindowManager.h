#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: UMG ESlateVisibility
#include "WindowManager.generated.h"

class UWindowWidget;
class UUserWidget;
class USoundCue;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWindowManagerOnFirstWindowOpened);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWindowManagerOnLastWindowClosed);

UCLASS(BlueprintType)
class UWindowManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWindowManagerOnFirstWindowOpened OnFirstWindowOpened;
    
    UPROPERTY(BlueprintAssignable)
    FWindowManagerOnLastWindowClosed OnLastWindowClosed;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* AudioWindowOpen;
    
    UPROPERTY(Export, Transient)
    TArray<UWindowWidget*> WindowStack;
    
    UPROPERTY(Export, Transient)
    TMap<TSubclassOf<UWindowWidget>, UWindowWidget*> WindowList;
    
    UPROPERTY(Export, Transient)
    TMap<TSubclassOf<UUserWidget>, TWeakObjectPtr<UUserWidget>> WidgetSingletonCache;
    
    UPROPERTY(Transient)
    bool ResolutionDownscaleActive;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSingletonWidgetVisibility(TSubclassOf<UUserWidget> WidgetClass, ESlateVisibility Visibility);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceWindow(UWindowWidget* Window);
    
    UFUNCTION(BlueprintCallable)
    UWindowWidget* OpenWindowFromClass(TSubclassOf<UWindowWidget> windowClass, int32 ZOrder, bool ShowCursor);
    
    UFUNCTION(BlueprintCallable)
    void OpenWindow(UWindowWidget* Window, bool PlayAudio, bool ShowCursor);
    
    UFUNCTION(BlueprintCallable)
    UWindowWidget* OpenSingleUseWindow(TSubclassOf<UWindowWidget> windowClass, int32 ZOrder);
    
    UFUNCTION(BlueprintPure)
    bool IsWindowOpen(UWindowWidget* Window) const;
    
    UFUNCTION(BlueprintPure)
    bool IsTopWindow(UWindowWidget* Window) const;
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* GetOrCreateSingletonWidget(TSubclassOf<UUserWidget> WidgetClass, bool& WidgetCreated);
    
    UFUNCTION(BlueprintPure)
    UWindowWidget* GetCurrentWindow() const;
    
    UFUNCTION(BlueprintCallable)
    void CloseWindow(UWindowWidget* Window);
    
    UFUNCTION(BlueprintCallable)
    void CloseTopWindow();
    
    UFUNCTION(BlueprintCallable)
    void CloseAllWindows();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CenterCursor();
    
public:
    UFUNCTION(BlueprintPure)
    bool AnyWindowsOpen() const;
    
    UWindowManager();
};

