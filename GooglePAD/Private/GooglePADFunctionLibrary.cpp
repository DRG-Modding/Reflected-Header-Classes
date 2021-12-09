#include "GooglePADFunctionLibrary.h"

EGooglePADErrorCode UGooglePADFunctionLibrary::ShowCellularDataConfirmation() {
    return EGooglePADErrorCode::AssetPack_NO_ERROR;
}

EGooglePADErrorCode UGooglePADFunctionLibrary::RequestRemoval(const FString& Name) {
    return EGooglePADErrorCode::AssetPack_NO_ERROR;
}

EGooglePADErrorCode UGooglePADFunctionLibrary::RequestInfo(const TArray<FString> AssetPacks) {
    return EGooglePADErrorCode::AssetPack_NO_ERROR;
}

EGooglePADErrorCode UGooglePADFunctionLibrary::RequestDownload(const TArray<FString> AssetPacks) {
    return EGooglePADErrorCode::AssetPack_NO_ERROR;
}

void UGooglePADFunctionLibrary::ReleaseDownloadState(const int32 State) {
}

void UGooglePADFunctionLibrary::ReleaseAssetPackLocation(const int32 Location) {
}

int32 UGooglePADFunctionLibrary::GetTotalBytesToDownload(const int32 State) {
    return 0;
}

EGooglePADStorageMethod UGooglePADFunctionLibrary::GetStorageMethod(const int32 Location) {
    return EGooglePADStorageMethod::AssetPack_STORAGE_FILES;
}

EGooglePADErrorCode UGooglePADFunctionLibrary::GetShowCellularDataConfirmationStatus(EGooglePADCellularDataConfirmStatus& Status) {
    return EGooglePADErrorCode::AssetPack_NO_ERROR;
}

EGooglePADDownloadStatus UGooglePADFunctionLibrary::GetDownloadStatus(const int32 State) {
    return EGooglePADDownloadStatus::AssetPack_UNKNOWN;
}

EGooglePADErrorCode UGooglePADFunctionLibrary::GetDownloadState(const FString& Name, int32& State) {
    return EGooglePADErrorCode::AssetPack_NO_ERROR;
}

int32 UGooglePADFunctionLibrary::GetBytesDownloaded(const int32 State) {
    return 0;
}

FString UGooglePADFunctionLibrary::GetAssetsPath(const int32 Location) {
    return TEXT("");
}

EGooglePADErrorCode UGooglePADFunctionLibrary::GetAssetPackLocation(const FString& Name, int32& Location) {
    return EGooglePADErrorCode::AssetPack_NO_ERROR;
}

EGooglePADErrorCode UGooglePADFunctionLibrary::CancelDownload(const TArray<FString> AssetPacks) {
    return EGooglePADErrorCode::AssetPack_NO_ERROR;
}

UGooglePADFunctionLibrary::UGooglePADFunctionLibrary() {
}

