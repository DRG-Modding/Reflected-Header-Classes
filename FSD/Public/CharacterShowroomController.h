#pragma once
#include "CoreMinimal.h"
#include "ShowroomController.h"
#include "EItemCategory.h"
#include "CharacterShowroomController.generated.h"

class UShowroomCameraKey;
class APlayerCharacter;
class UCharacterShowroomController;
class UPlayerCharacterID;
class UObject;

UCLASS(Blueprintable)
class UCharacterShowroomController : public UShowroomController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    APlayerCharacter* CharacterInstance;
    
    UFUNCTION(BlueprintImplementableEvent)
    void Receive_CharacterShown();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EquipWeapon(EItemCategory Category);
    
    UFUNCTION(BlueprintCallable)
    static UCharacterShowroomController* DisplayCharacter(UObject* WorldContextObject, UPlayerCharacterID* characterID, UShowroomCameraKey* Key);
    
    UCharacterShowroomController();
};

