#pragma once
#include "CoreMinimal.h"
#include "SaveGameSnapShot.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "SaveGameLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class USaveGameLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USaveGameLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TryGetSaveGameSnapShot(UObject* WorldContext, const FString& Filename, int32 userIdx, FSaveGameSnapShot& OutSnapShot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<FString, FDateTime> GetUserSaveGameSlots(const FString& UserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<FString, FDateTime> GetAllSaveGameSlots();
    
};

