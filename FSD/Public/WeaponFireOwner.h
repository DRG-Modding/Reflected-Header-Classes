#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Interface
//CROSS-MODULE INCLUDE: CoreUObject Quat
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "WeaponFireOwner.generated.h"

class APlayerCharacter;

UINTERFACE(Blueprintable)
class UWeaponFireOwner : public UInterface {
    GENERATED_BODY()
};

class IWeaponFireOwner : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    APlayerCharacter* GetPlayerCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FQuat GetMuzzleQuat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetMuzzleLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetIsLocallyControlled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetIsFirstPerson() const;
    
};

