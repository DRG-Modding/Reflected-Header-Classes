#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject SoftObjectPath
//CROSS-MODULE INCLUDE: CoreUObject SoftClassPath
#include "ETwoPlayerSplitScreenType.h"
#include "EFourPlayerSplitScreenType.h"
#include "EThreePlayerSplitScreenType.h"
#include "GameModeName.h"
#include "GameMapsSettings.generated.h"

class UGameMapsSettings;

UCLASS(BlueprintType, DefaultConfig)
class ENGINESETTINGS_API UGameMapsSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FString LocalMapOptions;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FSoftObjectPath TransitionMap;
    
    UPROPERTY(Config, EditAnywhere)
    bool bUseSplitscreen;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ETwoPlayerSplitScreenType::Type> TwoPlayerSplitscreenLayout;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<EThreePlayerSplitScreenType::Type> ThreePlayerSplitscreenLayout;
    
    UPROPERTY(Config, EditAnywhere)
    EFourPlayerSplitScreenType FourPlayerSplitscreenLayout;
    
    UPROPERTY(Config, EditAnywhere)
    bool bOffsetPlayerGamepadIds;
    
    UPROPERTY(Config, EditAnywhere, NoClear)
    FSoftClassPath GameInstanceClass;
    
private:
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath GameDefaultMap;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FSoftObjectPath ServerDefaultMap;
    
    UPROPERTY(Config, EditAnywhere, NoClear)
    FSoftClassPath GlobalDefaultGameMode;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FSoftClassPath GlobalDefaultServerGameMode;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    TArray<FGameModeName> GameModeMapPrefixes;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    TArray<FGameModeName> GameModeClassAliases;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer);
    
    UFUNCTION(BlueprintPure)
    bool GetSkipAssigningGamepadToPlayer1() const;
    
    UFUNCTION(BlueprintPure)
    static UGameMapsSettings* GetGameMapsSettings();
    
    UGameMapsSettings();
};

