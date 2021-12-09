#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "EBlueprintablePrivilegeResults.h"
#include "EBlueprintableUserPrivileges.h"
#include "EInviteBlockReason.h"
#include "FSDOnlineSystemUtils.generated.h"

class UFSDGameInstance;
class APlayerState;
class UObject;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FFSDOnlineSystemUtilsOnOverlayClosed, const FString&, LastURL);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FFSDOnlineSystemUtilsDelegate, const APlayerState*, CheckedPlayerState, EBlueprintableUserPrivileges, CheckedPrivilege, EBlueprintablePrivilegeResults, PrivilegeResult);

UCLASS(BlueprintType)
class UFSDOnlineSystemUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void TryToResolvePrivilege(const APlayerState* PlayerState, EBlueprintableUserPrivileges Privilege, EBlueprintablePrivilegeResults reason);
    
    UFUNCTION(BlueprintCallable)
    static void ShowUpgradeAccountUI();
    
    UFUNCTION(BlueprintCallable)
    static void ShowAccountPicker(UFSDGameInstance* gInstance, const int32 GamePlayerID);
    
    UFUNCTION(BlueprintCallable)
    static void OpenURLInOverlay(const FString& URL, FFSDOnlineSystemUtilsOnOverlayClosed OnOverlayClosed);
    
    UFUNCTION(BlueprintCallable)
    static void OpenProfileByUserId(APlayerState* Requestor, const FString& RequesteeUserID);
    
    UFUNCTION(BlueprintCallable)
    static void OpenProfile(APlayerState* Requestor, APlayerState* Requestee);
    
    UFUNCTION(BlueprintPure)
    static FText OnlinePlayBlockReasonToString(EBlueprintablePrivilegeResults reason);
    
    UFUNCTION(BlueprintPure)
    static void GetOnlinePlayBlockReasons(TArray<EBlueprintablePrivilegeResults>& reasons);
    
    UFUNCTION(BlueprintCallable)
    static void GetIsPrivilegeAllowed(const APlayerState* PlayerState, EBlueprintableUserPrivileges Privilege, const FFSDOnlineSystemUtilsDelegate& Delegate);
    
    UFUNCTION(BlueprintPure)
    static FText GetInviteFeatureBlockReason(UObject* WorldContextObject, EInviteBlockReason reason);
    
    UFUNCTION(BlueprintPure)
    static EInviteBlockReason CanPlayerInvite(UObject* WorldContextObject);
    
    UFSDOnlineSystemUtils();
};

