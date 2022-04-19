#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GameFunctionLibrary.generated.h"

class UFSDGameInstance;
class UObject;
class APlayerCharacter;
class UAudioComponent;
class UWindowWidget;
class USoundBase;
class UWindowManager;
class UGoogleAnalyticsWrapper;
class AFSDGameModeSpaceRig;
class UFSDSaveGame;
class AFSDGameState;
class AFSDGameMode;
class UGameData;
class UDeepDiveManager;
class ADeepCSGWorld;
class UCampaignManager;
class UAsyncManager;

UCLASS(BlueprintType)
class FSD_API UGameFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void SpawnOrUpdateAudio2D(UObject* WorldContext, UPARAM(Ref) UAudioComponent*& AudioComponent, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, FName FloatParamName, float FloatParam);
    
    UFUNCTION(BlueprintCallable)
    static void SetUsePushToTalk(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void SetGlobalGravityZ(UObject* WorldContextObject, float GravityZ);
    
    UFUNCTION(BlueprintCallable)
    static void SetGlobalGravityScale(UObject* WorldContextObject, float GravityScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWorldTickEnabled(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsTearingDown(UObject* caller, bool& NewIsTearingDown);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayingOffline(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayInEditor(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWindowManager* GetWindowManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetUsePushToTalk();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWindowWidget* GetTopWindow(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetProjectVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumPlayers(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumAdditionalPlayers(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetMajorProjectVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APlayerCharacter* GetLocalPlayerCharacter(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGoogleAnalyticsWrapper* GetGoogleAnalyticsWrapper(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGlobalGravityZ(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AFSDGameModeSpaceRig* GetFSDSRGameMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UFSDSaveGame* GetFSDSaveGame(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AFSDGameState* GetFSDGameState(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AFSDGameMode* GetFSDGameMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UFSDGameInstance* GetFSDGameInstance(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGameData* GetFSDGameData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDeepDiveManager* GetDeepDiveManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ADeepCSGWorld* GetCSGWorld(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetChangelist();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UCampaignManager* GetCampaingManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAsyncManager* GetAsyncManager(UObject* WorldContextObject);
    
};

