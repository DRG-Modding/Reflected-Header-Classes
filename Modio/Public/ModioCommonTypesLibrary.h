#pragma once
#include "CoreMinimal.h"
#include "ModioEmailAuthCode.h"
#include "ModioUserID.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "ModioInitializeOptions.h"
#include "EModioPortal.h"
#include "EModioEnvironment.h"
#include "ModioFileMetadataID.h"
#include "ModioGameID.h"
#include "ModioEmailAddress.h"
#include "ModioApiKey.h"
#include "ModioAuthenticationParams.h"
#include "ModioModID.h"
#include "ModioCommonTypesLibrary.generated.h"

UCLASS(BlueprintType)
class MODIO_API UModioCommonTypesLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static FModioInitializeOptions SetPortal(const FModioInitializeOptions& options, EModioPortal PortalToUse);
    
    UFUNCTION(BlueprintPure)
    static FModioInitializeOptions MakeInitializeOptions(int64 GameId, const FString& ApiKey, EModioEnvironment GameEnvironment, EModioPortal PortalInUse);
    
    UFUNCTION(BlueprintPure)
    static FModioGameID MakeGameId(int64 GameId);
    
    UFUNCTION(BlueprintPure)
    static FModioAuthenticationParams MakeAuthParams(const FString& AuthToken, const FString& EmailAddress, const bool bHasAcceptedTOS);
    
    UFUNCTION(BlueprintPure)
    static FModioApiKey MakeApiKey(const FString& ApiKey);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_UserIDToString(FModioUserID UserId);
    
    UFUNCTION(BlueprintPure)
    static FModioEmailAuthCode Conv_StringToEmailAuthCode(const FString& AuthCode);
    
    UFUNCTION(BlueprintPure)
    static FModioEmailAddress Conv_StringToEmailAddress(const FString& Email);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_ModIDToString(FModioModID ModId);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_GameIDToString(FModioGameID GameId);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_FileMetadataIDToString(FModioFileMetadataID FileMetadataID);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_EmailAuthCodeToString(FModioEmailAuthCode EmailAuthCode);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_EmailAddressToString(FModioEmailAddress EmailAddress);
    
    UFUNCTION(BlueprintPure)
    static FString Conv_ApiKeyToString(FModioApiKey ApiKey);
    
    UModioCommonTypesLibrary();
};

