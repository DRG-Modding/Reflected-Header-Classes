#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RoomNode.h"
#include "ProceduralFunctionLibrary.generated.h"

class UObject;
class AProceduralSetup;
class UFXSystemAsset;
class UObjective;
class UBiome;
class UDebrisPositioning;

UCLASS(BlueprintType)
class UProceduralFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UProceduralFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void SpawnTerrainImpact(UObject* WorldContextObject, UFXSystemAsset* particle, const FVector& Location, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AProceduralSetup* GetProceduralSetup(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetObjectiveXP(TSubclassOf<UObjective> objectiveClass, float missionLength);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetObjectiveCredits(TSubclassOf<UObjective> objectiveClass, float missionLength);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBiome* GetBiome(TSubclassOf<AProceduralSetup> levelSetup);
    
    UFUNCTION(BlueprintCallable)
    static void CreateEntrances(AProceduralSetup* pls, UPARAM(Ref) FRoomNode& Room, int32 exitCount, int32 entranceCount, UDebrisPositioning* exitPositioning, UDebrisPositioning* entrancePositioning);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    static bool AllControllersFinishedTransitionToPlay(UObject* WorldContextObject);
    
};

