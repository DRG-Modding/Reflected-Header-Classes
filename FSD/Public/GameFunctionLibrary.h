#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "GameFunctionLibrary.generated.h"

class UFSDSaveGame;
class UAudioComponent;
class UObject;
class USoundBase;
class UWindowManager;
class APlayerCharacter;
class UWindowWidget;
class UGoogleAnalyticsWrapper;
class UCampaignManager;
class AFSDGameModeSpaceRig;
class AFSDGameState;
class AFSDGameMode;
class UFSDGameInstance;
class UGameData;
class UDeepDiveManager;
class ADeepCSGWorld;
class UAsyncManager;

UCLASS(BlueprintType)
class UGameFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void SpawnOrUpdateAudio2D(UObject* WorldContext, UPARAM(Ref) UAudioComponent*& AudioComponent, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, FName FloatParamName, float FloatParam);
    
    UFUNCTION(BlueprintCallable)
    static void SetUsePushToTalk(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void SetGlobalGravityZ(UObject* WorldContextObject, float GravityZ);
    
    UFUNCTION(BlueprintCallable)
    static void SetGlobalGravityScale(UObject* WorldContextObject, float GravityScale);
    
    UFUNCTION(BlueprintPure)
    static bool IsWorldTickEnabled(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static void IsTearingDown(UObject* caller, bool& NewIsTearingDown);
    
    UFUNCTION(BlueprintPure)
    static bool IsPlayingOffline(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsPlayInEditor(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UWindowManager* GetWindowManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool GetUsePushToTalk();
    
    UFUNCTION(BlueprintPure)
    static UWindowWidget* GetTopWindow(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FString GetProjectVersion();
    
    UFUNCTION(BlueprintPure)
    static int32 GetNumPlayers(UObject* WorldContext);
    
    UFUNCTION(BlueprintPure)
    static int32 GetNumAdditionalPlayers(UObject* WorldContext);
    
    UFUNCTION(BlueprintPure)
    static FString GetMajorProjectVersion();
    
    UFUNCTION(BlueprintPure)
    static APlayerCharacter* GetLocalPlayerCharacter(UObject* WorldContext);
    
    UFUNCTION(BlueprintPure)
    static UGoogleAnalyticsWrapper* GetGoogleAnalyticsWrapper(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static float GetGlobalGravityZ(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static AFSDGameModeSpaceRig* GetFSDSRGameMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UFSDSaveGame* GetFSDSaveGame(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static AFSDGameState* GetFSDGameState(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static AFSDGameMode* GetFSDGameMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UFSDGameInstance* GetFSDGameInstance(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UGameData* GetFSDGameData();
    
    UFUNCTION(BlueprintPure)
    static UDeepDiveManager* GetDeepDiveManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static ADeepCSGWorld* GetCSGWorld(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static int32 GetChangelist();
    
    UFUNCTION(BlueprintPure)
    static UCampaignManager* GetCampaingManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UAsyncManager* GetAsyncManager(UObject* WorldContextObject);
    
    UGameFunctionLibrary();
};

