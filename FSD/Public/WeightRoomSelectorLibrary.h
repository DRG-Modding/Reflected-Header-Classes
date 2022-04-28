#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "WeightedRoomSelector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
#include "WeightRoomSelectorLibrary.generated.h"

class URoomGenerator;

UCLASS(Blueprintable)
class UWeightRoomSelectorLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWeightRoomSelectorLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetupWeightedRoomSelector(UPARAM(Ref) FWeightedRoomSelector& Target, UPARAM(Ref) TArray<URoomGenerator*>& Rooms);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URoomGenerator* SelectRandomRoom(UPARAM(Ref) FWeightedRoomSelector& Target, UPARAM(Ref) FRandomStream& RandomStream);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URoomGenerator* GetRandomRoom(UPARAM(Ref) TArray<URoomGenerator*>& Rooms, bool removeChosenRoom, UPARAM(Ref) FRandomStream& RandomStream);
    
};

