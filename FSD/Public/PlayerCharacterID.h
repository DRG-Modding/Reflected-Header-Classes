#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "SaveGameIDInterface.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "PlayerCharacterID.generated.h"

class APlayerCharacter;
class UPlayerCharacterData;

UCLASS(BlueprintType)
class FSD_API UPlayerCharacterID : public UDataAsset, public ISaveGameIDInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGuid SaveGameID;
    
    UPROPERTY(EditAnywhere)
    FName AssetName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<APlayerCharacter> Character;
    
    UPROPERTY(EditAnywhere)
    FString AnalyticsID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPlayerCharacterData* CharacterData;
    
public:
    UFUNCTION(BlueprintPure)
    TSubclassOf<APlayerCharacter> GetCharacterClass() const;
    
    UFUNCTION(BlueprintPure)
    APlayerCharacter* GetCharacter() const;
    
    UPlayerCharacterID();
};

