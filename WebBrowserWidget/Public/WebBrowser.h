#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG Widget
#include "WebBrowser.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWebBrowserOnUrlChanged, const FText&, Text);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWebBrowserOnBeforePopup, const FString&, URL, const FString&, Frame);

UCLASS()
class WEBBROWSERWIDGET_API UWebBrowser : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWebBrowserOnUrlChanged OnUrlChanged;
    
    UPROPERTY(BlueprintAssignable)
    FWebBrowserOnBeforePopup OnBeforePopup;
    
protected:
    UPROPERTY(EditAnywhere)
    FString InitialURL;
    
    UPROPERTY(EditAnywhere)
    bool bSupportsTransparency;
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadURL(const FString& NewURL);
    
    UFUNCTION(BlueprintCallable)
    void LoadString(const FString& Contents, const FString& DummyURL);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetUrl() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitleText() const;
    
    UFUNCTION(BlueprintCallable)
    void ExecuteJavascript(const FString& ScriptText);
    
    UWebBrowser();
};

