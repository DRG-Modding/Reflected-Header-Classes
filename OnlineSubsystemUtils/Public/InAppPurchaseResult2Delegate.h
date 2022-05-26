#pragma once
#include "CoreMinimal.h"
#include "InAppPurchaseReceiptInfo2.h"
#include "EInAppPurchaseStatus.h"
#include "InAppPurchaseResult2Delegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInAppPurchaseResult2, EInAppPurchaseStatus, PurchaseStatus, const TArray<FInAppPurchaseReceiptInfo2>&, InAppPurchaseReceipts);

