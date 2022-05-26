#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "DamageData.h"
#include "DamageFunctionLibrary.generated.h"

class UPawnStatsComponent;
class UDamageClass;
class UDamageTag;
class UObject;
class AActor;
class UDamageImpulse;
class USkeletalMeshComponent;
class ULimbDismembermentList;

UCLASS(Blueprintable)
class UDamageFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDamageFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGibbedDeath(const TArray<UDamageTag*>& Tags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsExplosiveDeath(UObject* WorldContext, UPawnStatsComponent* PawnStats, const TArray<UDamageTag*>& Tags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCorrosiveDeath(UDamageClass* DamageClass, const TArray<UDamageTag*>& Tags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCookedDeath(const TArray<UDamageTag*>& Tags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBurnDeath(UDamageClass* DamageClass, const TArray<UDamageTag*>& Tags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetForceFromDamageImpulse(const AActor*& Target, const FDamageData& DamageData);
    
    UFUNCTION(BlueprintCallable)
    static UDamageImpulse* GetDamageImpulse(const FDamageData& DamageData);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindClosestBoneIndex(const USkeletalMeshComponent*& Mesh, const FVector& Location, ULimbDismembermentList* dismembermentList, float MaxDistance);
    
    UFUNCTION(BlueprintCallable)
    static FName FindClosestBone(const USkeletalMeshComponent*& Mesh, const FVector& Location, ULimbDismembermentList* dismembermentList, float MaxDistance);
    
};

