#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "EMissionStatType.h"
#include "MissionStat.generated.h"

class UMissionStat;
class UMissionStatCategory;
class UObject;
class UFSDAchievement;
class APlayerCharacter;
class UPlayerCharacterID;
class UTexture2D;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMissionStatOnCountChanged, UMissionStat*, MissionStat, float, Value);

UCLASS(BlueprintType)
class UMissionStat : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMissionStatOnCountChanged OnCountChanged;
    
protected:
    UPROPERTY(VisibleAnywhere)
    FGuid SaveGameID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStatCategory* Category;
    
    UPROPERTY(EditAnywhere)
    UFSDAchievement* StatAchievement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMissionStatType MissionStatType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DoNotShowInMissionStatView;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowAllValuesCombined;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowHighestValue;
    
public:
    UFUNCTION(BlueprintPure)
    static FText MissionStatToText(EMissionStatType StatType, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void Increment(UObject* WorldContext, UMissionStat* Stat, TSubclassOf<APlayerCharacter> CharacterClass, float Amount);
    
    UFUNCTION(BlueprintPure)
    float GetStatMinCount(UObject* WorldContext);
    
    UFUNCTION(BlueprintPure)
    float GetStatMaxCount(UObject* WorldContext);
    
    UFUNCTION(BlueprintPure)
    FText GetStatCountTotalAsText(UObject* WorldContext);
    
    UFUNCTION(BlueprintPure)
    float GetStatCountTotal(UObject* WorldContext);
    
    UFUNCTION(BlueprintPure)
    float GetStatCountPct(UObject* WorldContext, TSubclassOf<APlayerCharacter> CharacterClass);
    
    UFUNCTION(BlueprintPure)
    FText GetStatCountAsText(UObject* WorldContext, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintPure)
    float GetStatCount(UObject* WorldContext, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintPure)
    FString GetSourceTitle();
    
    UFUNCTION(BlueprintPure)
    FText GetLowestStatCountAsText(UObject* WorldContext);
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetIcon() const;
    
    UFUNCTION(BlueprintPure)
    FText GetHighestStatCountAsText(UObject* WorldContext);
    
    UFUNCTION(BlueprintPure)
    FText GetCategoryTitle() const;
    
    UMissionStat();
};

