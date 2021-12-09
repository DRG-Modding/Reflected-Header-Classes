#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "NavLocalGridManager.generated.h"

UCLASS(BlueprintType)
class AIMODULE_API UNavLocalGridManager : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static bool SetLocalNavigationGridDensity(UObject* WorldContextObject, float CellSize);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveLocalNavigationGrid(UObject* WorldContextObject, int32 GridId, bool bRebuildGrids);
    
    UFUNCTION(BlueprintCallable)
    static bool FindLocalNavigationGridPath(UObject* WorldContextObject, const FVector& Start, const FVector& End, TArray<FVector>& PathPoints);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddLocalNavigationGridForPoints(UObject* WorldContextObject, const TArray<FVector>& Locations, const int32 Radius2D, const float Height, bool bRebuildGrids);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddLocalNavigationGridForPoint(UObject* WorldContextObject, const FVector& Location, const int32 Radius2D, const float Height, bool bRebuildGrids);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddLocalNavigationGridForCapsule(UObject* WorldContextObject, const FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, const int32 Radius2D, const float Height, bool bRebuildGrids);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddLocalNavigationGridForBox(UObject* WorldContextObject, const FVector& Location, FVector Extent, FRotator Rotation, const int32 Radius2D, const float Height, bool bRebuildGrids);
    
    UNavLocalGridManager();
};

