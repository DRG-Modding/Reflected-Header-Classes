#pragma once
#include "CoreMinimal.h"
#include "GameModeName.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "ETwoPlayerSplitScreenType.h"
#include "EFourPlayerSplitScreenType.h"
#include "EThreePlayerSplitScreenType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
#include "GameMapsSettings.generated.h"

class UGameMapsSettings;

UCLASS(Blueprintable, DefaultConfig)
class ENGINESETTINGS_API UGameMapsSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocalMapOptions;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath TransitionMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSplitscreen;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ETwoPlayerSplitScreenType::Type> TwoPlayerSplitscreenLayout;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<EThreePlayerSplitScreenType::Type> ThreePlayerSplitscreenLayout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFourPlayerSplitScreenType FourPlayerSplitscreenLayout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOffsetPlayerGamepadIds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FSoftClassPath GameInstanceClass;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath GameDefaultMap;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ServerDefaultMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FSoftClassPath GlobalDefaultGameMode;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftClassPath GlobalDefaultServerGameMode;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameModeName> GameModeMapPrefixes;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameModeName> GameModeClassAliases;
    
public:
    UGameMapsSettings();
    UFUNCTION(BlueprintCallable)
    void SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSkipAssigningGamepadToPlayer1() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGameMapsSettings* GetGameMapsSettings();
    
};

