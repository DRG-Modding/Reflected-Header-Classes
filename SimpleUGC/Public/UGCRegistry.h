#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EUGCApprovalStatus.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EPackageSortField.h"
#include "UGCRegistry.generated.h"

class AActor;
class UUGCPackage;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUGCRegistryOnPackageMounted, bool, Sandbox);

UCLASS(BlueprintType)
class SIMPLEUGC_API UUGCRegistry : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FUGCRegistryOnPackageMounted OnPackageMounted;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<UUGCPackage*> UGCPackages;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<TSubclassOf<AActor>, TSubclassOf<AActor>> RegisteredOverrides;
    
    UPROPERTY(BlueprintReadWrite)
    bool PackageChange;
    
private:
    UPROPERTY(Transient)
    TArray<UUGCPackage*> UGCPackagesInstalledDuringJoin;
    
    UPROPERTY(Transient)
    TArray<UUGCPackage*> UGCPackagesUnmountedDuringJoin;
    
public:
    UFUNCTION(BlueprintCallable)
    void UnmountUGCPackages(TArray<FString> ExcludingModIds);
    
    UFUNCTION(BlueprintCallable)
    bool UnmountUGCPackage(UUGCPackage* Package, bool RemoveFromUserSettings);
    
    UFUNCTION(BlueprintCallable)
    void UnmountSandboxUGCPackages();
    
    UFUNCTION(BlueprintCallable)
    void UnmountAllNonVerifiedUGCPackages();
    
    UFUNCTION(BlueprintCallable)
    UUGCPackage* TryGetPackageFromId(const FString& ModId);
    
    UFUNCTION(BlueprintCallable)
    void ResetUGCPackagesManipulatedDuringJoin();
    
    UFUNCTION(BlueprintCallable)
    void RegisterOverrideForClass(TSubclassOf<AActor> ClassToOverride, TSubclassOf<AActor> OverrideClass);
    
    UFUNCTION(BlueprintCallable)
    void RegisterAssetFromPackage(UUGCPackage* Package);
    
    UFUNCTION(BlueprintPure)
    int32 NumberOfModsInstalled(EUGCApprovalStatus ApprovalStatus);
    
    UFUNCTION(BlueprintCallable)
    bool MountUGCPackage(UUGCPackage* Package, bool FromJoining);
    
    UFUNCTION(BlueprintPure)
    bool IsModToBeEnabled(int64 ModId) const;
    
    UFUNCTION(BlueprintPure)
    bool IsModInstalledImprecise(const FString& ModName, bool IncludeDeprecatedLocation) const;
    
    UFUNCTION(BlueprintPure)
    bool IsModInstalledByIdOrName(const FString& ModIdOrName, bool IncludeDeprecatedLocation) const;
    
    UFUNCTION(BlueprintPure)
    bool IsModInstalled(const FString& ModId) const;
    
    UFUNCTION(BlueprintPure)
    bool IsModEnabled(const FString& ModId) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UUGCPackage*> GetPackagesWhichDependsOnPackage(UUGCPackage* Package);
    
    UFUNCTION(BlueprintPure)
    TArray<UUGCPackage*> GetPackagesSorted(EPackageSortField ByField, bool Ascending) const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<AActor> GetOverrideForActorClass(TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintPure)
    bool GetMapsInPackage(UUGCPackage* Package, TArray<FName>& Maps);
    
    UFUNCTION(BlueprintPure)
    bool GetAllClassesInPackage(UUGCPackage* Package, TArray<UClass*>& Classes);
    
    UFUNCTION(BlueprintPure)
    bool GetActorClassesWithReplacementActorComponentsInPackage(UUGCPackage* Package, TArray<TSubclassOf<AActor>>& ActorClasses);
    
    UFUNCTION(BlueprintCallable)
    void ClearOverrideForClass(TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintPure)
    bool AreModsInstalled(EUGCApprovalStatus ApprovalStatus);
    
    UFUNCTION(BlueprintPure)
    bool AreDeprecatedModsInstalled();
    
    UFUNCTION(BlueprintCallable)
    bool ApplyOverridesForActorClass(TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable)
    bool ApplyAllOverridesInPackage(UUGCPackage* Package);
    
    UUGCRegistry();
};

