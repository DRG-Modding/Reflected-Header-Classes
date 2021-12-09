#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "AIFunctionLibrary.generated.h"

class AActor;
class UObject;
class APawn;
class APlayerCharacter;
class UAttackerPositioningComponent;

UCLASS(BlueprintType)
class UAIFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SetAICanSense(bool canSense);
    
    UFUNCTION(BlueprintCallable)
    static int32 MakeEnemiesFleeFromArea(UObject* WorldContextObject, const FVector& Center, float Radius, int32 maxEnemiesAffected);
    
    UFUNCTION(BlueprintCallable)
    static void MakeEnemiesBackOutOfArea(UObject* WorldContextObject, const FVector& Center, float Radius);
    
    UFUNCTION(BlueprintPure)
    static bool IsEnemyAlertet(APawn* enemy);
    
    UFUNCTION(BlueprintPure)
    static APlayerCharacter* GetPlayerTarget(AActor* From, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool accountForAttackers, AActor* ignoreTarget, bool IsFlying);
    
    UFUNCTION(BlueprintPure)
    static bool GetAttackableTargetsInRange(AActor* From, TArray<UAttackerPositioningComponent*>& outArray, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool accountForAttackers, AActor* ignoreTarget, bool IsFlying);
    
    UFUNCTION(BlueprintPure)
    static UAttackerPositioningComponent* GetAttackableTarget(AActor* From, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool accountForAttackers, AActor* ignoreTarget, bool IsFlying);
    
    UFUNCTION(BlueprintPure)
    static APlayerCharacter* ConsiderChangingTarget(APlayerCharacter* CurrentTarget, AActor* From, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool CurrentTargetMustBeAlive, bool IsFlying);
    
    UFUNCTION(BlueprintCallable)
    static void AlertEnemy(APawn* enemy);
    
    UFUNCTION(BlueprintCallable)
    static void AlertEnemiesInRange(UObject* WorldContextObject, FVector Origin, float range, APawn* alerter);
    
    UAIFunctionLibrary();
};

