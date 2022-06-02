#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=FSDEngine -ObjectName=DeepPathFinderSize -FallbackName=DeepPathFinderSize
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EnemySpawnedDelegateDelegate.h"
#include "SpawningBlueprintLibrary.generated.h"

class UObject;
class UEnemyGroupDescriptor;
class UEnemyDescriptor;

UCLASS(Blueprintable)
class FSD_API USpawningBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USpawningBlueprintLibrary();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SpawnEnemyGroupDescriptorSpreadOut(UObject* WorldContextObject, UEnemyGroupDescriptor* descriptor, float Difficulty, const TArray<FVector>& Locations, bool Alert, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SpawnEnemyGroupDescriptor(UObject* WorldContextObject, UEnemyGroupDescriptor* descriptor, float Difficulty, FVector Location, bool Alert, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SpawnEnemiesFromPool(UObject* WorldContextObject, float Difficulty, const TArray<FVector>& Locations, bool Alert, bool isConstantPreassure);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SpawnEnemiesAtLocationWithCallback(UObject* WorldContextObject, UEnemyDescriptor* EnemyDescriptor, int32 count, FVector Location, const FEnemySpawnedDelegate& Callback, bool Alert, bool scaleToDifficulty, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SpawnEnemiesAtLocation(UObject* WorldContextObject, UEnemyDescriptor* EnemyDescriptor, int32 count, FVector Location, bool Alert, bool scaleToDifficulty, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SpawnEnemiesAtEachLocation(UObject* WorldContextObject, UEnemyDescriptor* EnemyDescriptor, TArray<FVector> Locations, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    static TArray<FVector> GetSpawnPointsInRange(UObject* WorldContextObject, float distanceToPlayers, int32 spawnPointCount, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    static TArray<FVector> GetSpawnPointsInCircle(UObject* WorldContextObject, FVector Location, float Radius, int32 count, bool scaleToDificulty, float maxSpawnAngle, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    static TArray<FVector> GetSpawnPointsFromLocation(UObject* WorldContextObject, FVector Location, float Distance, int32 spawnPointCount, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    static TArray<FVector> GetSpawnPointsAroundLocation(UObject* WorldContextObject, FVector Location, float Distance, int32 spawnPointCount, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    static FVector GetSpawnPointInRange(UObject* WorldContextObject, float distanceToPlayers, DeepPathFinderSize pfSize);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    static FVector GetSpawnPointFromLocation(UObject* WorldContextObject, FVector Location, float Distance, DeepPathFinderSize pfSize);
    
};

