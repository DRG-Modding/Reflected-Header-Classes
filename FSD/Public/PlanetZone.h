#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "SaveGameIDInterface.h"
#include "RequiredMissionItem.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "PlanetZone.generated.h"

class UFSDSaveGame;
class UBiome;

UCLASS(BlueprintType)
class UPlanetZone : public UDataAsset, public ISaveGameIDInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<UBiome*> Biomes;
    
    UPROPERTY(EditAnywhere)
    TArray<FRequiredMissionItem> RequiredMissions;
    
    UPROPERTY(EditAnywhere)
    bool MustBeUnlocked;
    
    UPROPERTY(VisibleAnywhere)
    FGuid SaveGameID;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlocked(UFSDSaveGame* SaveGame) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetSavegameID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UBiome*> GetBiomes() const;
    
    UPlanetZone();
    
    // Fix for true pure virtual functions not being implemented
};

