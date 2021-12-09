#include "ModioSubsystem.h"

void UModioSubsystem::SetLogLevel(EModioLogLevel UnrealLogLevel) {
}

void UModioSubsystem::RunPendingHandlers() {
}

TMap<FModioModID, FModioModCollectionEntry> UModioSubsystem::QueryUserSubscriptions() {
    return TMap<FModioModID, FModioModCollectionEntry>();
}

TMap<FModioModID, FModioModCollectionEntry> UModioSubsystem::QueryUserInstallations(bool bIncludeOutdatedMods) {
    return TMap<FModioModID, FModioModCollectionEntry>();
}

TMap<FModioModID, FModioModCollectionEntry> UModioSubsystem::QuerySystemInstallations() {
    return TMap<FModioModID, FModioModCollectionEntry>();
}

void UModioSubsystem::K2_UnsubscribeFromModAsync(FModioModID ModToUnsubscribeFrom, FModioSubsystemOnUnsubscribeComplete OnUnsubscribeComplete) {
}

void UModioSubsystem::K2_SubscribeToModAsync(FModioModID ModToSubscribeTo, FModioSubsystemOnSubscribeComplete OnSubscribeComplete) {
}

void UModioSubsystem::K2_SubmitModRatingAsync(FModioModID Mod, EModioRating Rating, FModioSubsystemCallback Callback) {
}

void UModioSubsystem::K2_ShutdownAsync(FModioSubsystemOnShutdownComplete OnShutdownComplete) {
}

void UModioSubsystem::K2_RequestEmailAuthCodeAsync(const FModioEmailAddress& EmailAddress, FModioSubsystemCallback Callback) {
}

void UModioSubsystem::K2_ReportContentAsync(FModioReportParams Report, FModioSubsystemCallback Callback) {
}

FModioOptionalUser UModioSubsystem::K2_QueryUserProfile() {
    return FModioOptionalUser{};
}

FModioOptionalModProgressInfo UModioSubsystem::K2_QueryCurrentModUpdate() {
    return FModioOptionalModProgressInfo{};
}

void UModioSubsystem::K2_ListAllModsAsync(const FModioFilterParams& Filter, FModioSubsystemCallback Callback) {
}

void UModioSubsystem::K2_InitializeAsync(const FModioInitializeOptions& InitializeOptions, FModioSubsystemOnInitComplete OnInitComplete) {
}

void UModioSubsystem::K2_GetUserMediaAvatarAsync(EModioAvatarSize AvatarSize, FModioSubsystemCallback Callback) {
}

void UModioSubsystem::K2_GetTermsOfUseAsync(EModioAuthenticationProvider Provider, EModioLanguage Locale, FModioSubsystemCallback Callback) {
}

void UModioSubsystem::K2_GetModTagOptionsAsync(FModioSubsystemCallback Callback) {
}

void UModioSubsystem::K2_GetModMediaLogoAsync(FModioModID ModId, EModioLogoSize LogoSize, FModioSubsystemCallback Callback) {
}

void UModioSubsystem::K2_GetModMediaGalleryImageAsync(FModioModID ModId, EModioGallerySize GallerySize, int32 Index, FModioSubsystemCallback Callback) {
}

void UModioSubsystem::K2_GetModMediaAvatarAsync(FModioModID ModId, EModioAvatarSize AvatarSize, FModioSubsystemCallback Callback) {
}

void UModioSubsystem::K2_GetModInfoAsync(FModioModID ModId, FModioSubsystemCallback Callback) {
}

void UModioSubsystem::K2_GetModDependenciesAsync(FModioModID ModId, FModioSubsystemCallback Callback) {
}

void UModioSubsystem::K2_FetchExternalUpdatesAsync(FModioSubsystemOnFetchDone OnFetchDone) {
}

void UModioSubsystem::K2_EnableModManagement(FModioSubsystemCallback Callback) {
}

void UModioSubsystem::K2_ClearUserDataAsync(FModioSubsystemCallback Callback) {
}

void UModioSubsystem::K2_AuthenticateUserExternalAsync(const FModioAuthenticationParams& User, EModioAuthenticationProvider Provider, FModioSubsystemCallback Callback) {
}

void UModioSubsystem::K2_AuthenticateUserEmailAsync(const FModioEmailAuthCode& AuthenticationCode, FModioSubsystemCallback Callback) {
}

bool UModioSubsystem::IsModManagementBusy() {
    return false;
}

TArray<FModioValidationError> UModioSubsystem::GetLastValidationError() {
    return TArray<FModioValidationError>();
}

void UModioSubsystem::ForceUninstallModAsync(FModioModID ModToRemove, FModioSubsystemCallback Callback) {
}

void UModioSubsystem::DisableModManagement() {
}

UModioSubsystem::UModioSubsystem() {
}

