#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: Engine ENavPathEvent
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine ENavigationOptionFlag
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "NavigationPath.generated.h"

class UNavigationPath;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNavigationPathPathUpdatedNotifier, UNavigationPath*, AffectedPath, TEnumAsByte<ENavPathEvent::Type>, PathEvent);

UCLASS(BlueprintType)
class NAVIGATIONSYSTEM_API UNavigationPath : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FNavigationPathPathUpdatedNotifier PathUpdatedNotifier;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FVector> PathPoints;
    
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<ENavigationOptionFlag::Type> RecalculateOnInvalidation;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStringPulled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPartial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPathLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPathCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDebugString() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag::Type> DoRecalculation);
    
    UFUNCTION(BlueprintCallable)
    void EnableDebugDrawing(bool bShouldDrawDebugData, FLinearColor PathColor);
    
    UNavigationPath();
};

