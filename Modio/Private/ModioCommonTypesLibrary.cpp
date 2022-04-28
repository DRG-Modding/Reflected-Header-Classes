#include "ModioCommonTypesLibrary.h"

FModioInitializeOptions UModioCommonTypesLibrary::SetSessionIdentifier(const FModioInitializeOptions& options, const FString& SessionIdentifier) {
    return FModioInitializeOptions{};
}

FModioInitializeOptions UModioCommonTypesLibrary::SetPortal(const FModioInitializeOptions& options, EModioPortal PortalToUse) {
    return FModioInitializeOptions{};
}

FModioInitializeOptions UModioCommonTypesLibrary::MakeInitializeOptions(int64 GameId, const FString& ApiKey, EModioEnvironment GameEnvironment, EModioPortal PortalInUse) {
    return FModioInitializeOptions{};
}

FModioGameID UModioCommonTypesLibrary::MakeGameId(int64 GameId) {
    return FModioGameID{};
}

FModioAuthenticationParams UModioCommonTypesLibrary::MakeAuthParams(const FString& AuthToken, const FString& EmailAddress, const bool bHasAcceptedTOS) {
    return FModioAuthenticationParams{};
}

FModioApiKey UModioCommonTypesLibrary::MakeApiKey(const FString& ApiKey) {
    return FModioApiKey{};
}

FString UModioCommonTypesLibrary::Conv_UserIDToString(FModioUserID UserId) {
    return TEXT("");
}

FModioEmailAuthCode UModioCommonTypesLibrary::Conv_StringToEmailAuthCode(const FString& AuthCode) {
    return FModioEmailAuthCode{};
}

FModioEmailAddress UModioCommonTypesLibrary::Conv_StringToEmailAddress(const FString& Email) {
    return FModioEmailAddress{};
}

FString UModioCommonTypesLibrary::Conv_ModIDToString(FModioModID ModId) {
    return TEXT("");
}

FString UModioCommonTypesLibrary::Conv_GameIDToString(FModioGameID GameId) {
    return TEXT("");
}

FString UModioCommonTypesLibrary::Conv_FileMetadataIDToString(FModioFileMetadataID FileMetadataID) {
    return TEXT("");
}

FString UModioCommonTypesLibrary::Conv_EmailAuthCodeToString(FModioEmailAuthCode EmailAuthCode) {
    return TEXT("");
}

FString UModioCommonTypesLibrary::Conv_EmailAddressToString(FModioEmailAddress EmailAddress) {
    return TEXT("");
}

FString UModioCommonTypesLibrary::Conv_ApiKeyToString(FModioApiKey ApiKey) {
    return TEXT("");
}

UModioCommonTypesLibrary::UModioCommonTypesLibrary() {
}

