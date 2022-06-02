#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystem -ObjectName=EInAppPurchaseState -FallbackName=EInAppPurchaseState
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystem -ObjectName=InAppPurchaseProductInfo -FallbackName=InAppPurchaseProductInfo
#include "InAppPurchaseResultDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInAppPurchaseResult, TEnumAsByte<EInAppPurchaseState::Type>, PurchaseStatus, const FInAppPurchaseProductInfo&, InAppPurchaseReceipts);

