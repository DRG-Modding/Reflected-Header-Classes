#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Color
//CROSS-MODULE INCLUDE: Engine SceneComponent
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine ETraceTypeQuery
#include "TrailComponent.generated.h"

class UWorld;
class UTrailComponent;

UCLASS(BlueprintType)
class UTrailComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MinRadius;
    
    UPROPERTY(EditAnywhere)
    float MinStep;
    
    UPROPERTY(EditAnywhere)
    float MaxStep;
    
    UPROPERTY(EditAnywhere)
    bool MinimizePath;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    TArray<FVector> Trail;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETraceTypeQuery> Query;
    
    UPROPERTY(EditAnywhere)
    bool bDrawPath;
    
    UPROPERTY(EditAnywhere)
    float MaxDrawDistance;
    
    UPROPERTY(EditAnywhere)
    float PathLineWidth;
    
    UPROPERTY(EditAnywhere)
    float PathNodeSize;
    
    UPROPERTY(EditAnywhere)
    FColor DrawColor;
    
public:
    UFUNCTION(BlueprintPure)
    int32 TrailLength() const;
    
    UFUNCTION(BlueprintCallable)
    void ToggleDrawPath(bool Visible);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintPure)
    FVector GetTrailPoint(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetNextTrailPointFrom(FVector From) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNearestTrailIndex(FVector Location) const;
    
    UFUNCTION(BlueprintPure)
    static UTrailComponent* GetNearestPlayerTrail(UWorld* World, FVector From, float MinDist, float MaxDist);
    
    UFUNCTION(BlueprintPure)
    FColor GetDrawColor() const;
    
    UTrailComponent();
};
