#pragma once
#include "CoreMinimal.h"
#include "ModioModManagementEvent.h"
#include "EModioAuthenticationProvider.h"
#include "ModioErrorCode.h"
#include "EModioAvatarSize.h"
#include "ModioModCollectionEntry.h"
#include "EModioLanguage.h"
//CROSS-MODULE INCLUDE: Engine EngineSubsystem
#include "EModioLogLevel.h"
#include "ModioFilterParams.h"
#include "ModioModID.h"
#include "ModioReportParams.h"
#include "ModioEmailAddress.h"
#include "EModioRating.h"
#include "ModioOptionalUser.h"
#include "ModioOptionalModProgressInfo.h"
#include "ModioOptionalModInfoList.h"
#include "ModioInitializeOptions.h"
#include "ModioOptionalModTagOptions.h"
#include "ModioOptionalImage.h"
#include "ModioOptionalTerms.h"
#include "EModioLogoSize.h"
#include "EModioGallerySize.h"
#include "ModioOptionalModInfo.h"
#include "ModioOptionalModDependencyList.h"
#include "ModioAuthenticationParams.h"
#include "ModioEmailAuthCode.h"
#include "ModioValidationError.h"
#include "ModioSubsystem.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FModioSubsystemOnUnsubscribeComplete, FModioErrorCode, ErrorCode);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FModioSubsystemOnShutdownComplete, FModioErrorCode, ErrorCode);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FModioSubsystemOnSubscribeComplete, FModioErrorCode, ErrorCode);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FModioSubsystemCallback, FModioErrorCode, ErrorCode);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FModioSubsystemOnInitComplete, FModioErrorCode, ErrorCode);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FModioSubsystemOnFetchDone, FModioErrorCode, ErrorCode);

UCLASS(BlueprintType, MinimalAPI)
class UModioSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void SetLogLevel(EModioLogLevel UnrealLogLevel);
    
    UFUNCTION(BlueprintCallable)
    void RunPendingHandlers();
    
    UFUNCTION(BlueprintPure)
    TMap<FModioModID, FModioModCollectionEntry> QueryUserSubscriptions();
    
    UFUNCTION(BlueprintPure)
    TMap<FModioModID, FModioModCollectionEntry> QueryUserInstallations(bool bIncludeOutdatedMods);
    
    UFUNCTION(BlueprintPure)
    TMap<FModioModID, FModioModCollectionEntry> QuerySystemInstallations();
    
    UFUNCTION(BlueprintCallable)
    void K2_UnsubscribeFromModAsync(FModioModID ModToUnsubscribeFrom, FModioSubsystemOnUnsubscribeComplete OnUnsubscribeComplete);
    
    UFUNCTION(BlueprintCallable)
    void K2_SubscribeToModAsync(FModioModID ModToSubscribeTo, FModioSubsystemOnSubscribeComplete OnSubscribeComplete);
    
    UFUNCTION(BlueprintCallable)
    void K2_SubmitModRatingAsync(FModioModID Mod, EModioRating Rating, FModioSubsystemCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_ShutdownAsync(FModioSubsystemOnShutdownComplete OnShutdownComplete);
    
    UFUNCTION(BlueprintCallable)
    void K2_RequestEmailAuthCodeAsync(const FModioEmailAddress& EmailAddress, FModioSubsystemCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_ReportContentAsync(FModioReportParams Report, FModioSubsystemCallback Callback);
    
    UFUNCTION(BlueprintPure)
    FModioOptionalUser K2_QueryUserProfile();
    
    UFUNCTION(BlueprintPure)
    FModioOptionalModProgressInfo K2_QueryCurrentModUpdate();
    
    UFUNCTION(BlueprintCallable)
    void K2_ListAllModsAsync(const FModioFilterParams& Filter, FModioSubsystemCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_InitializeAsync(const FModioInitializeOptions& InitializeOptions, FModioSubsystemOnInitComplete OnInitComplete);
    
    UFUNCTION(BlueprintCallable)
    void K2_GetUserMediaAvatarAsync(EModioAvatarSize AvatarSize, FModioSubsystemCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_GetTermsOfUseAsync(EModioAuthenticationProvider Provider, EModioLanguage Locale, FModioSubsystemCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_GetModTagOptionsAsync(FModioSubsystemCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_GetModMediaLogoAsync(FModioModID ModId, EModioLogoSize LogoSize, FModioSubsystemCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_GetModMediaGalleryImageAsync(FModioModID ModId, EModioGallerySize GallerySize, int32 Index, FModioSubsystemCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_GetModMediaAvatarAsync(FModioModID ModId, EModioAvatarSize AvatarSize, FModioSubsystemCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_GetModInfoAsync(FModioModID ModId, FModioSubsystemCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_GetModDependenciesAsync(FModioModID ModId, FModioSubsystemCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_FetchExternalUpdatesAsync(FModioSubsystemOnFetchDone OnFetchDone);
    
    UFUNCTION(BlueprintCallable)
    void K2_EnableModManagement(FModioSubsystemCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_ClearUserDataAsync(FModioSubsystemCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_AuthenticateUserExternalAsync(const FModioAuthenticationParams& User, EModioAuthenticationProvider Provider, FModioSubsystemCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    void K2_AuthenticateUserEmailAsync(const FModioEmailAuthCode& AuthenticationCode, FModioSubsystemCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    bool IsModManagementBusy();
    
    UFUNCTION(BlueprintCallable)
    TArray<FModioValidationError> GetLastValidationError();
    
    UFUNCTION(BlueprintCallable)
    void ForceUninstallModAsync(FModioModID ModToRemove, FModioSubsystemCallback Callback);
    
    UFUNCTION(BlueprintCallable)
    void DisableModManagement();
    
    UModioSubsystem();
};

