#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "SaveGameSnapShot.h"
//CROSS-MODULE INCLUDE: CoreUObject DateTime
#include "SaveGameLibrary.generated.h"

class UObject;

UCLASS(BlueprintType)
class USaveGameLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static bool TryGetSaveGameSnapShot(UObject* WorldContext, const FString& Filename, int32 userIdx, FSaveGameSnapShot& OutSnapShot);
    
    UFUNCTION(BlueprintPure)
    static TMap<FString, FDateTime> GetUserSaveGameSlots(const FString& UserId);
    
    UFUNCTION(BlueprintPure)
    static TMap<FString, FDateTime> GetAllSaveGameSlots();
    
    USaveGameLibrary();
};

