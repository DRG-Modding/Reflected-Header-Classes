#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "RoomNode.h"
#include "ProceduralFunctionLibrary.generated.h"

class UBiome;
class UObjective;
class UObject;
class UFXSystemAsset;
class AProceduralSetup;
class UDebrisPositioning;

UCLASS(BlueprintType)
class UProceduralFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void SpawnTerrainImpact(UObject* WorldContextObject, UFXSystemAsset* particle, const FVector& Location, FRotator Rotation);
    
    UFUNCTION(BlueprintPure)
    static AProceduralSetup* GetProceduralSetup(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static int32 GetObjectiveXP(TSubclassOf<UObjective> objectiveClass, float missionLength);
    
    UFUNCTION(BlueprintPure)
    static int32 GetObjectiveCredits(TSubclassOf<UObjective> objectiveClass, float missionLength);
    
    UFUNCTION(BlueprintPure)
    static UBiome* GetBiome(TSubclassOf<AProceduralSetup> levelSetup);
    
    UFUNCTION(BlueprintCallable)
    static void CreateEntrances(AProceduralSetup* pls, UPARAM(Ref) FRoomNode& Room, int32 exitCount, int32 entranceCount, UDebrisPositioning* exitPositioning, UDebrisPositioning* entrancePositioning);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintPure)
    static bool AllControllersFinishedTransitionToPlay(UObject* WorldContextObject);
    
    UProceduralFunctionLibrary();
};

