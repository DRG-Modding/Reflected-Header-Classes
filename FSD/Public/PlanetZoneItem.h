#pragma once
#include "CoreMinimal.h"
#include "PlanetZoneItem.generated.h"

class UBiome;
class UPlanetZone;
class UGeneratedMission;

USTRUCT()
struct FPlanetZoneItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBiome*> Biomes;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UGeneratedMission*> missions;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UPlanetZone* Zone;
    
    FSD_API FPlanetZoneItem();
};

