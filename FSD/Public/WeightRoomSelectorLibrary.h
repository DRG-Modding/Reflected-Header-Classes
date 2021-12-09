#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "WeightedRoomSelector.h"
//CROSS-MODULE INCLUDE: CoreUObject RandomStream
#include "WeightRoomSelectorLibrary.generated.h"

class URoomGenerator;

UCLASS(BlueprintType)
class UWeightRoomSelectorLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void SetupWeightedRoomSelector(UPARAM(Ref) FWeightedRoomSelector& Target, UPARAM(Ref) TArray<URoomGenerator*>& Rooms);
    
    UFUNCTION(BlueprintPure)
    static URoomGenerator* SelectRandomRoom(UPARAM(Ref) FWeightedRoomSelector& Target, UPARAM(Ref) FRandomStream& RandomStream);
    
    UFUNCTION(BlueprintPure)
    static URoomGenerator* GetRandomRoom(UPARAM(Ref) TArray<URoomGenerator*>& Rooms, bool removeChosenRoom, UPARAM(Ref) FRandomStream& RandomStream);
    
    UWeightRoomSelectorLibrary();
};

