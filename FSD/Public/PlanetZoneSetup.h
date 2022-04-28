#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PlanetZoneSetup.generated.h"

class UPlanetZone;
class UBiome;

UCLASS(Blueprintable)
class UPlanetZoneSetup : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlanetZone*> PlanetZones;
    
public:
    UPlanetZoneSetup();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlanetZone* GetPlanetZoneForBiome(UBiome* Biome) const;
    
};

