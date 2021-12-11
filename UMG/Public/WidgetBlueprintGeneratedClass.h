#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintGeneratedClass
#include "DelegateRuntimeBinding.h"
#include "WidgetBlueprintGeneratedClass.generated.h"

class UWidgetTree;
class UUserWidget;
class UWidgetAnimation;

UCLASS()
class UMG_API UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass {
    GENERATED_BODY()
public:
    UPROPERTY()
    UWidgetTree* WidgetTree;
    
    UPROPERTY()
    uint8 bAllowTemplate: 1;
    
    UPROPERTY()
    uint8 bAllowDynamicCreation: 1;
    
private:
    UPROPERTY()
    uint8 bValidTemplate: 1;
    
    UPROPERTY(Transient)
    uint8 bTemplateInitialized: 1;
    
    UPROPERTY(Transient)
    uint8 bCookedTemplate: 1;
    
    UPROPERTY()
    uint8 bClassRequiresNativeTick: 1;
    
public:
    UPROPERTY()
    TArray<FDelegateRuntimeBinding> Bindings;
    
    UPROPERTY()
    TArray<UWidgetAnimation*> Animations;
    
    UPROPERTY()
    TArray<FName> NamedSlots;
    
private:
    UPROPERTY(Export)
    TSoftObjectPtr<UUserWidget> TemplateAsset;
    
    UPROPERTY(Export, Transient)
    UUserWidget* Template;
    
public:
    UWidgetBlueprintGeneratedClass();
};

