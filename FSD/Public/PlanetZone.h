#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SaveGameIDInterface.h"
#include "RequiredMissionItem.h"
#include "PlanetZone.generated.h"

class UBiome;
class UFSDSaveGame;

UCLASS(BlueprintType)
class UPlanetZone : public UDataAsset, public ISaveGameIDInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBiome*> Biomes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRequiredMissionItem> RequiredMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MustBeUnlocked;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SavegameID;
    
public:
    UPlanetZone();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlocked(UFSDSaveGame* SaveGame) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetSavegameID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UBiome*> GetBiomes() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

