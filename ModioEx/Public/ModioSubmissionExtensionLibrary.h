#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioModID -FallbackName=ModioModID
#include "ModioCreateModFileMemoryParams.h"
#include "ModioSubmissionExtensionLibrary.generated.h"

class UModioSubsystem;

UCLASS(Blueprintable)
class UModioSubmissionExtensionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioSubmissionExtensionLibrary();
    UFUNCTION(BlueprintCallable)
    static void K2_SubmitNewModFileForModFromMemory(UModioSubsystem* Target, FModioModID Mod, FModioCreateModFileMemoryParams Params);
    
    UFUNCTION(BlueprintCallable)
    static bool K2_LoadModFileToMemory(UModioSubsystem* Target, FModioModID ModId, TArray<uint8>& ModData);
    
};

