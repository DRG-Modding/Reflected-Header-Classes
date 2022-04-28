#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESplineCoordinateSpace -FallbackName=ESplineCoordinateSpace
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETraceTypeQuery -FallbackName=ETraceTypeQuery
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InterpCurveVector2D -FallbackName=InterpCurveVector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=PaintContext -FallbackName=PaintContext
#include "Curve2DAppearance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EInterpCurveMode -FallbackName=EInterpCurveMode
//CROSS-MODULE INCLUDE V2: -ModuleName=FSDEngine -ObjectName=ECarveFilterType -FallbackName=ECarveFilterType
//CROSS-MODULE INCLUDE V2: -ModuleName=FSDEngine -ObjectName=EPreciousMaterialOptions -FallbackName=EPreciousMaterialOptions
#include "FSDSplineLibrary.generated.h"

class USplineMeshComponent;
class AActor;
class USplineComponent;
class UObject;
class UTerrainMaterial;

UCLASS(Blueprintable)
class UFSDSplineLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFSDSplineLibrary();
    UFUNCTION(BlueprintCallable)
    static bool SplineComponentSphereTrace(const USplineComponent*& SplineComponent, float Radius, TEnumAsByte<ETraceTypeQuery> TraceType, float StepSize, TArray<AActor*> IgnoreActors, FHitResult& OutHitResult, FVector Offset);
    
    UFUNCTION(BlueprintCallable)
    static void SetStartAndEndTangentsCurve2D(UPARAM(Ref) FInterpCurveVector2D& Curve, FVector2D StartTangent, FVector2D EndTangent);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FTransform> GetSplineComponentTransforms(const USplineComponent*& SplineComponent, float StepSize, TEnumAsByte<ESplineCoordinateSpace::Type> Space);
    
    UFUNCTION(BlueprintPure)
    static void GetLocationAndTangentsAtSplinePoint(const USplineComponent* Spline, int32 PointIndex, FVector& Location, FVector& ArriveTangent, FVector& LeaveTangent, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    
    UFUNCTION(BlueprintPure)
    static void EvalCurveScaled2D(const FInterpCurveVector2D& Curve, float Key, FVector2D ScaleBy, FVector2D& OutPosition, FVector2D& OutTangent);
    
    UFUNCTION(BlueprintPure)
    static void EvalCurve2D(const FInterpCurveVector2D& Curve, float Key, FVector2D& OutPosition, FVector2D& OutTangent);
    
    UFUNCTION(BlueprintCallable)
    static void DrawCurveScaled2D(UPARAM(Ref) FPaintContext& Context, const FInterpCurveVector2D& Curve, FVector2D ScaleBy, FCurve2DAppearance Appearance, float Opacity);
    
    UFUNCTION(BlueprintCallable)
    static void DrawCurve2D(UPARAM(Ref) FPaintContext& Context, const FInterpCurveVector2D& Curve, FCurve2DAppearance Appearance, float Opacity);
    
    UFUNCTION(BlueprintCallable)
    static void DrawBezierScaled2D(UPARAM(Ref) FPaintContext& Context, FVector2D InStartPos, FVector2D InStartTangent, FVector2D InEndPos, FVector2D InEndTangent, FCurve2DAppearance InAppearance, FVector2D ScaleBy, float Opacity, bool InClampTangents);
    
    UFUNCTION(BlueprintCallable)
    static void DrawBezier2D(UPARAM(Ref) FPaintContext& Context, FVector2D InStartPos, FVector2D InStartTangent, FVector2D InEndPos, FVector2D InEndTangent, FCurve2DAppearance InAppearance, float Opacity, bool InClampTangents);
    
    UFUNCTION(BlueprintPure)
    static FInterpCurveVector2D CreateCurveWithTangents2D(const TArray<FVector2D>& Positions, FVector2D StartTangent, FVector2D EndTangent, TEnumAsByte<EInterpCurveMode> Mode);
    
    UFUNCTION(BlueprintPure)
    static FInterpCurveVector2D CreateCurve2D(const TArray<FVector2D>& Positions, TEnumAsByte<EInterpCurveMode> Mode);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertSplineDistanceToInputKey(UPARAM(Ref) USplineComponent*& SplineComponent, USplineComponent* OptionalTargetSpline);
    
    UFUNCTION(BlueprintCallable)
    static bool CarveAroundSplinePoints(UObject* WorldContext, const FVector& InStartLocation, const FVector& InStartTangent, const FVector& InEndLocation, const FVector& InEndTangent, float InRadius, UTerrainMaterial* InTerrainMaterial, ECarveFilterType InCarveFilter, EPreciousMaterialOptions InPrecious);
    
    UFUNCTION(BlueprintCallable)
    static bool CarveAroundSplineMesh(USplineMeshComponent* InMesh, float InRadius, UTerrainMaterial* InTerrainMaterial, ECarveFilterType InCarveFilter, EPreciousMaterialOptions InPrecious);
    
    UFUNCTION(BlueprintCallable)
    static float ApproximateSplineDistanceAtWorldLocation(const USplineComponent* Spline, const FVector& WorldLocation);
    
};

