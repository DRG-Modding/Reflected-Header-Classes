#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ModioUserID.h"
#include "EModioEnvironment.h"
#include "ModioInitializeOptions.h"
#include "ModioAuthenticationParams.h"
#include "EModioPortal.h"
#include "ModioGameID.h"
#include "ModioApiKey.h"
#include "ModioEmailAuthCode.h"
#include "ModioFileMetadataID.h"
#include "ModioEmailAddress.h"
#include "ModioModID.h"
#include "ModioCommonTypesLibrary.generated.h"

UCLASS(Blueprintable)
class MODIO_API UModioCommonTypesLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioCommonTypesLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioInitializeOptions SetSessionIdentifier(const FModioInitializeOptions& options, const FString& SessionIdentifier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioInitializeOptions SetPortal(const FModioInitializeOptions& options, EModioPortal PortalToUse);
    
    UFUNCTION(BlueprintPure)
    static FModioInitializeOptions MakeInitializeOptions(int64 GameId, const FString& ApiKey, EModioEnvironment GameEnvironment, EModioPortal PortalInUse);
    
    UFUNCTION(BlueprintPure)
    static FModioGameID MakeGameId(int64 GameId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioAuthenticationParams MakeAuthParams(const FString& AuthToken, const FString& EmailAddress, const bool bHasAcceptedTOS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioApiKey MakeApiKey(const FString& ApiKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_UserIDToString(FModioUserID UserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioEmailAuthCode Conv_StringToEmailAuthCode(const FString& AuthCode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FModioEmailAddress Conv_StringToEmailAddress(const FString& Email);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_ModIDToString(FModioModID ModId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_GameIDToString(FModioGameID GameId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_FileMetadataIDToString(FModioFileMetadataID FileMetadataID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_EmailAuthCodeToString(FModioEmailAuthCode EmailAuthCode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_EmailAddressToString(FModioEmailAddress EmailAddress);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_ApiKeyToString(FModioApiKey ApiKey);
    
};

