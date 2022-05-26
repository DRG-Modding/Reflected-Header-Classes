#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "RoomGeneratorGroupInstance.h"
#include "RoomGeneratorGroup.generated.h"

class URoomGenerator;

UCLASS(Blueprintable)
class URoomGeneratorGroup : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URoomGenerator*> Rooms;
    
    URoomGeneratorGroup();
    UFUNCTION(BlueprintCallable)
    static URoomGenerator* GetRandomRoomWithTags(UPARAM(Ref) FRoomGeneratorGroupInstance& groupInstance, const FGameplayTagQuery& queury, UPARAM(Ref) FRandomStream& RandomStream);
    
    UFUNCTION(BlueprintCallable)
    URoomGenerator* GetRandomRoom(UPARAM(Ref) FRandomStream& RandomStream);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRoomGeneratorGroupInstance CreateGroupInstance() const;
    
};

