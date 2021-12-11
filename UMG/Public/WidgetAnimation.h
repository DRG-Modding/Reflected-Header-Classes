#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSequence
#include "WidgetAnimationBinding.h"
#include "WidgetAnimation.generated.h"

class UMovieScene;
class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE(FWidgetAnimationDelegate);

UCLASS(MinimalAPI)
class UWidgetAnimation : public UMovieSceneSequence {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UMovieScene* MovieScene;
    
    UPROPERTY()
    TArray<FWidgetAnimationBinding> AnimationBindings;
    
private:
    UPROPERTY()
    bool bLegacyFinishOnStop;
    
    UPROPERTY()
    FString DisplayLabel;
    
public:
    UFUNCTION(BlueprintCallable)
    void UnbindFromAnimationStarted(UUserWidget* Widget, FWidgetAnimationDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    void UnbindFromAnimationFinished(UUserWidget* Widget, FWidgetAnimationDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    void UnbindAllFromAnimationStarted(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void UnbindAllFromAnimationFinished(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStartTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEndTime() const;
    
    UFUNCTION(BlueprintCallable)
    void BindToAnimationStarted(UUserWidget* Widget, FWidgetAnimationDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    void BindToAnimationFinished(UUserWidget* Widget, FWidgetAnimationDelegate Delegate);
    
    UWidgetAnimation();
};

