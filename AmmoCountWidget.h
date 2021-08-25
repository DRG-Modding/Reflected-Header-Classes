// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AmmoCountWidget.generated.h"

UDELEGATE(BlueprintAuthorityOnly) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVisibleChanged, bool, Visible, bool, showClipCount);
UDELEGATE(BlueprintAuthorityOnly) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTotalVisibleChanged, bool, Visible);
UDELEGATE(BlueprintAuthorityOnly) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTotalChanged, int, Total);
UDELEGATE(BlueprintAuthorityOnly) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemTotalChanged, int, Value);
UDELEGATE(BlueprintAuthorityOnly) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnItemEquipped);

UCLASS(BlueprintType)
class FSD_API UAmmoCountWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable) FOnVisibleChanged OnVisibleChanged;
	UPROPERTY(BlueprintAssignable) FOnTotalVisibleChanged OnTotalVisibleChanged;
	UPROPERTY(BlueprintAssignable) FOnTotalChanged OnTotalChanged;
	UPROPERTY(BlueprintAssignable) FOnItemTotalChanged OnItemTotalChanged;
	UPROPERTY(BlueprintAssignable) FOnItemEquipped OnItemEquipped;

	UFUNCTION(BlueprintCallable) void DoItemEquipped() {}; 
};
