#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
//CROSS-MODULE INCLUDE: CoreUObject RandomStream
#include "RoomGeneratorGroupInstance.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagQuery
#include "RoomGeneratorGroup.generated.h"

class URoomGenerator;

UCLASS(BlueprintType)
class URoomGeneratorGroup : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<URoomGenerator*> Rooms;
    
    UFUNCTION(BlueprintCallable)
    static URoomGenerator* GetRandomRoomWithTags(UPARAM(Ref) FRoomGeneratorGroupInstance& groupInstance, const FGameplayTagQuery& queury, UPARAM(Ref) FRandomStream& RandomStream);
    
    UFUNCTION(BlueprintCallable)
    URoomGenerator* GetRandomRoom(UPARAM(Ref) FRandomStream& RandomStream);
    
    UFUNCTION(BlueprintPure)
    FRoomGeneratorGroupInstance CreateGroupInstance() const;
    
    URoomGeneratorGroup();
};

