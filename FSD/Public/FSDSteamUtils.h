#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "ESteamBranch.h"
#include "FSDSteamUtils.generated.h"

class APlayerState;

UCLASS(BlueprintType)
class UFSDSteamUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static bool PlayerIsFollowingUsOnSteam();
    
    UFUNCTION(BlueprintCallable)
    static void OpenURLInSteamBrowser(const FString& URL);
    
    UFUNCTION(BlueprintPure)
    static bool IsTextFilteringInitialized();
    
    UFUNCTION(BlueprintPure)
    static bool IsSteamLoaded();
    
    UFUNCTION(BlueprintPure)
    static bool IsDev(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    static bool InitializeFilterText();
    
    UFUNCTION(BlueprintPure)
    static bool HasSupporterUpgrade();
    
    UFUNCTION(BlueprintPure)
    static bool HasDeluxeEdition();
    
    UFUNCTION(BlueprintPure)
    static bool HasContentCreatorEdition();
    
    UFUNCTION(BlueprintCallable)
    static FString GetSteamRegion();
    
    UFUNCTION(BlueprintCallable)
    static FString GetSteamLanguage();
    
    UFUNCTION(BlueprintCallable)
    static FString GetSteamBranchString();
    
    UFUNCTION(BlueprintCallable)
    static ESteamBranch GetSteamBranch();
    
    UFUNCTION(BlueprintCallable)
    static FString GetPlayerSteamName();
    
    UFUNCTION(BlueprintCallable)
    static FString GetPlayerSteamID();
    
    UFUNCTION(BlueprintPure)
    static FString FilterProfanityText(const FString& inputMessage);
    
    UFSDSteamUtils();
};

