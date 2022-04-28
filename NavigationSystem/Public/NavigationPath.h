#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnNavigationPathUpdatedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ENavigationOptionFlag -FallbackName=ENavigationOptionFlag
#include "NavigationPath.generated.h"

UCLASS(Blueprintable)
class NAVIGATIONSYSTEM_API UNavigationPath : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNavigationPathUpdated PathUpdatedNotifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> PathPoints;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ENavigationOptionFlag::Type> RecalculateOnInvalidation;
    
    UNavigationPath();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStringPulled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPartial() const;
    
    UFUNCTION(BlueprintPure)
    float GetPathLength() const;
    
    UFUNCTION(BlueprintPure)
    float GetPathCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDebugString() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag::Type> DoRecalculation);
    
    UFUNCTION(BlueprintCallable)
    void EnableDebugDrawing(bool bShouldDrawDebugData, FLinearColor PathColor);
    
};

