#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE: OnlineSubsystemUtils BlueprintSessionResult
#include "FriendInfo.h"
#include "EServerDistance.h"
#include "EFSDNATType.h"
#include "EDisconnectReason.h"
#include "EServerSortOrder.h"
#include "EMissionStructure.h"
#include "EFSDMissionStatus.h"
//CROSS-MODULE INCLUDE: CoreUObject DateTime
#include "SessionHandling.generated.h"

class UBiome;
class UObject;
class UFSDGameInstance;
class UPlayerCharacterID;
class APlayerCharacter;
class UDifficultySetting;
class UMissionTemplate;

UCLASS(BlueprintType)
class USessionHandling : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void StopVoice(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void StartVoice(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool StartSearchForFriends(int32 localUserNum, UFSDGameInstance* GameInstance);
    
    UFUNCTION(BlueprintCallable)
    static void StartCheckForInstalledDLC(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void SortServerList(UObject* WorldContextObject, EServerSortOrder order, bool Reverse, bool sortByFriends, UPARAM(Ref) TArray<FBlueprintSessionResult>& servers);
    
    UFUNCTION(BlueprintCallable)
    static void ShowStoreUI(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ShowInviteUI(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void JoinOfficialXboxClub(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsVoiceChatting();
    
    UFUNCTION(BlueprintPure)
    static bool IsInActiveSession();
    
    UFUNCTION(BlueprintPure)
    static bool IsDisconnectReasonAKick(EDisconnectReason reason);
    
    UFUNCTION(BlueprintCallable)
    static FString GetVoiceStatus();
    
    UFUNCTION(BlueprintPure)
    static FText GetSessionJoinError(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetOnlinePlayerName(int32 localUserNum, FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static EFSDNATType GetNATType(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static EMissionStructure GetMissionStructure(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static FString GetLoginStatus(int32 localUserNum);
    
    UFUNCTION(BlueprintPure)
    static FString GetHostUsername(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FString GetHostUniqueId(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetFriendsList(int32 localUserNum, TArray<FFriendInfo>& Players);
    
    UFUNCTION(BlueprintPure)
    static FString GetFriendlyServerNameSanitized(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FString GetFriendlyServerName(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCurrentSessionState(FString& sessionState, FString& ID);
    
    UFUNCTION(BlueprintCallable)
    static bool FSDUpdateSessionInfo(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static EFSDMissionStatus FSDMissionStatus(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static void FSDListen(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool FSDIsSessionValid(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintPure)
    static bool FSDIsPrivateServer(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintPure)
    static bool FSDIsPasswordRequired(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintPure)
    static bool FSDIsModdedServer(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintPure)
    static bool FSDIsModdedSandboxServer(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintPure)
    static bool FSDIsFullServer(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintPure)
    static bool FSDIsEliteDeepDive(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintPure)
    static bool FSDIsClassLocked(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintPure)
    static bool FSDHasHiddenModsNotInstalledOnClient(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintPure)
    static bool FSDHasGameStarted(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintPure)
    static TArray<FString> FSDGetVerifiedModsInstalled(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintPure)
    static bool FSDGetServerStartTime(const FBlueprintSessionResult& Result, FDateTime& StartTime);
    
    UFUNCTION(BlueprintPure)
    static FString FSDGetServerNameSanitized(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintPure)
    static FString FSDGetServerName(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintPure)
    static FString FSDGetServerID(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintPure)
    static FString FSDGetRegion(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintPure)
    static TArray<UPlayerCharacterID*> FSDGetPlayerClassIDs(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintPure)
    static TArray<TSubclassOf<APlayerCharacter>> FSDGetPlayerClasses(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintPure)
    static int32 FSDGetNumPlayers(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintPure)
    static TArray<FString> FSDGetModsInstalled(const FBlueprintSessionResult& Result, bool ExcludeVerifiedMods);
    
    UFUNCTION(BlueprintPure)
    static int32 FSDGetMissionSeed(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintPure)
    static FString FSDGetMapName(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintPure)
    static FString FSDGetHostUserID(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintPure)
    static int32 FSDGetGlobalMissionSeed(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintPure)
    static float FSDGetDistanceFloat(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintPure)
    static EServerDistance FSDGetDistance(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintPure)
    static UDifficultySetting* FSDGetDifficulty(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintPure)
    static FString FSDGetBuildId(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static bool FSDCancelFindSessions(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool FindBestQuickJoinServer(UObject* WorldContextObject, UPARAM(Ref) TArray<FBlueprintSessionResult>& sessions, UDifficultySetting* Difficulty, UBiome* Biome, UMissionTemplate* MissionTemplate, FBlueprintSessionResult& OutResult);
    
    UFUNCTION(BlueprintPure)
    static bool AllowLinkToExternalFeedback(UObject* WorldContextObject);
    
    USessionHandling();
};

