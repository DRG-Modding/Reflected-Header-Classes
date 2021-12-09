#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
//CROSS-MODULE INCLUDE: Engine RuntimeFloatCurve
#include "ETreasureType.h"
#include "TreasureSettings.generated.h"

class UDrinkableDataAsset;
class UItemSkinSet;
class USpecialEvent;
class UVictoryPose;
class UItemAquisitionSource;

UCLASS()
class UTreasureSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UItemSkinSet*> SkinSets;
    
    UPROPERTY(EditAnywhere)
    TArray<UDrinkableDataAsset*> Drinks;
    
    UPROPERTY(EditAnywhere)
    TArray<UVictoryPose*> VictoryPoses;
    
    UPROPERTY(EditAnywhere)
    TArray<ETreasureType> CrateTreasureTypes;
    
    UPROPERTY(EditAnywhere)
    FText CrateTreasureEmptyMsg;
    
    UPROPERTY(EditAnywhere)
    TArray<ETreasureType> LostPackTreasureTypes;
    
    UPROPERTY(EditAnywhere)
    FText LostPackEmptyMsg;
    
    UPROPERTY(EditAnywhere)
    UItemAquisitionSource* CrateAquisitionSource;
    
    UPROPERTY(EditAnywhere)
    UItemAquisitionSource* LostPackAquisitionSource;
    
protected:
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve TreasureChanceMissionLengthCurve;
    
    UPROPERTY(EditAnywhere)
    TArray<USpecialEvent*> TreasureEvents;
    
public:
    UTreasureSettings();
};

