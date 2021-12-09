#pragma once
#include "CoreMinimal.h"
#include "EGooglePADErrorCode.generated.h"

UENUM()
enum class EGooglePADErrorCode : uint8 {
    AssetPack_NO_ERROR,
    AssetPack_APP_UNAVAILABLE,
    AssetPack_UNAVAILABLE,
    AssetPack_INVALID_REQUEST,
    AssetPack_DOWNLOAD_NOT_FOUND,
    AssetPack_API_NOT_AVAILABLE,
    AssetPack_NETWORK_ERROR,
    AssetPack_ACCESS_DENIED,
    AssetPack_INSUFFICIENT_STORAGE,
    AssetPack_PLAY_STORE_NOT_FOUND,
    AssetPack_NETWORK_UNRESTRICTED,
    AssetPack_INTERNAL_ERROR,
    AssetPack_INITIALIZATION_NEEDED,
    AssetPack_INITIALIZATION_FAILED,
    AssetPack_MAX UMETA(Hidden),
};

