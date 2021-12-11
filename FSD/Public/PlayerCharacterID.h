#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "SaveGameIDInterface.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "PlayerCharacterID.generated.h"

class UPlayerCharacterData;
class APlayerCharacter;

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
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<APlayerCharacter> GetCharacterClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerCharacter* GetCharacter() const;
    
    UPlayerCharacterID();
    
    // Fix for true pure virtual functions not being implemented
};

