#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EMissionStatType.h"
#include "MissionStat.generated.h"

class UMissionStat;
class UTexture2D;
class UObject;
class UMissionStatCategory;
class UFSDAchievement;
class APlayerCharacter;
class UPlayerCharacterID;

UCLASS(BlueprintType)
class UMissionStat : public UDataAsset {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FStatCountChanged, UObject*, WorldContext, UMissionStat*, MissionStat, float, Value);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FStatCountChanged OnCountChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SavegameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionStatCategory* Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFSDAchievement* StatAchievement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMissionStatType MissionStatType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoNotShowInMissionStatView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowAllValuesCombined;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowHighestValue;
    
public:
    UMissionStat();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText MissionStatToText(EMissionStatType StatType, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void Increment(UObject* WorldContext, UMissionStat* Stat, TSubclassOf<APlayerCharacter> CharacterClass, float Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStatMinCount(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStatMaxCount(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetStatCountTotalAsText(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStatCountTotal(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStatCountPct(UObject* WorldContext, TSubclassOf<APlayerCharacter> CharacterClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetStatCountAsText(UObject* WorldContext, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStatCount(UObject* WorldContext, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSourceTitle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLowestStatCountAsText(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetHighestStatCountAsText(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCategoryTitle() const;
    
};

