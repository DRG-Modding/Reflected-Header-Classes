#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ESchematicType.h"
#include "SpecialEventBlueprintLibrary.generated.h"

class USchematic;
class UObject;
class UPlayerCharacterID;

UCLASS(Blueprintable)
class USpecialEventBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USpecialEventBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static USchematic* TryGivePendingReward(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void StorePendingReward(UObject* WorldContextObject, const TArray<USchematic*>& schematicsToChooseFrom);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SpawnEventRewardFrame(UObject* WorldContextObject, FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasPendingReward(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static TArray<USchematic*> GetSpecialEventsRewardSchematics(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static USchematic* FindRandomSchematicForCharacter(UObject* WorldContextObject, UPlayerCharacterID* characterID, ESchematicType SchematicType);
    
    UFUNCTION(BlueprintCallable)
    static void ClearPendingReward(UObject* WorldContextObject);
    
};

