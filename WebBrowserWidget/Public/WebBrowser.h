#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "WebBrowser.generated.h"

UCLASS()
class WEBBROWSERWIDGET_API UWebBrowser : public UWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUrlChanged, const FText&, Text);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBeforePopup, const FString&, URL, const FString&, Frame);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnUrlChanged OnUrlChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnBeforePopup OnBeforePopup;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InitialURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsTransparency;
    
public:
    UWebBrowser();
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
    
};

