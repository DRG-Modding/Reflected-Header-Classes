#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: SlateCore SlateBrush
//CROSS-MODULE INCLUDE: SlateCore Geometry
#include "SlateBlueprintLibrary.generated.h"

class UObject;

UCLASS(BlueprintType)
class UMG_API USlateBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static FVector2D TransformVectorLocalToAbsolute(const FGeometry& Geometry, FVector2D LocalVector);
    
    UFUNCTION(BlueprintPure)
    static FVector2D TransformVectorAbsoluteToLocal(const FGeometry& Geometry, FVector2D AbsoluteVector);
    
    UFUNCTION(BlueprintPure)
    static float TransformScalarLocalToAbsolute(const FGeometry& Geometry, float LocalScalar);
    
    UFUNCTION(BlueprintPure)
    static float TransformScalarAbsoluteToLocal(const FGeometry& Geometry, float AbsoluteScalar);
    
    UFUNCTION()
    static void ScreenToWidgetLocal(UObject* WorldContextObject, const FGeometry& Geometry, FVector2D ScreenPosition, FVector2D& LocalCoordinate, bool bIncludeWindowPosition);
    
    UFUNCTION()
    static void ScreenToWidgetAbsolute(UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D& AbsoluteCoordinate, bool bIncludeWindowPosition);
    
    UFUNCTION()
    static void ScreenToViewport(UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D& ViewportPosition);
    
    UFUNCTION(BlueprintPure)
    static void LocalToViewport(UObject* WorldContextObject, const FGeometry& Geometry, FVector2D LocalCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition);
    
    UFUNCTION(BlueprintPure)
    static FVector2D LocalToAbsolute(const FGeometry& Geometry, FVector2D LocalCoordinate);
    
    UFUNCTION(BlueprintPure)
    static bool IsUnderLocation(const FGeometry& Geometry, const FVector2D& AbsoluteCoordinate);
    
    UFUNCTION(BlueprintPure)
    static FVector2D GetLocalTopLeft(const FGeometry& Geometry);
    
    UFUNCTION(BlueprintPure)
    static FVector2D GetLocalSize(const FGeometry& Geometry);
    
    UFUNCTION(BlueprintPure)
    static FVector2D GetAbsoluteSize(const FGeometry& Geometry);
    
    UFUNCTION(BlueprintPure)
    static bool EqualEqual_SlateBrush(const FSlateBrush& A, const FSlateBrush& B);
    
    UFUNCTION(BlueprintPure)
    static void AbsoluteToViewport(UObject* WorldContextObject, FVector2D AbsoluteDesktopCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition);
    
    UFUNCTION(BlueprintPure)
    static FVector2D AbsoluteToLocal(const FGeometry& Geometry, FVector2D AbsoluteCoordinate);
    
    USlateBlueprintLibrary();
};

