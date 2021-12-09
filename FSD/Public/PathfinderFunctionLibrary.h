#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE: FSDEngine DeepPathFinderSize
//CROSS-MODULE INCLUDE: FSDEngine DeepPathFinderType
#include "PathfinderFunctionLibrary.generated.h"

class UObject;

UCLASS(BlueprintType)
class UPathfinderFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintPure)
    static FVector SnapToGrid(UObject* WorldContextObject, const FVector& Origin, DeepPathFinderType pathType, DeepPathFinderSize pathSize, float maxSnapDistance);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintPure)
    static bool IsPathfinderReady(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintPure)
    static FVector FindRandomPositionOnNavmeshAtDistance(UObject* WorldContextObject, const FVector& Origin, float atDistance);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintPure)
    static FVector FindRandomNearbyPositionOnNavmesh(UObject* WorldContextObject, const FVector& Origin, float Radius);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintPure)
    static FVector FindPointAlongPathTo(UObject* WorldContextObject, const FVector& Origin, const FVector& Destination, float atDistance);
    
    UPathfinderFunctionLibrary();
};

