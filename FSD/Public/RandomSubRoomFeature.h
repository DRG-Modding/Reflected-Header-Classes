#pragma once
#include "CoreMinimal.h"
#include "RoomFeature.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagQuery
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "RandomSubRoomFeature.generated.h"

class URoomGeneratorGroup;

UCLASS(EditInlineNew)
class URandomSubRoomFeature : public URoomFeature {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    URoomGeneratorGroup* RoomGroup;
    
    UPROPERTY(VisibleAnywhere)
    FGameplayTagQuery tagQuery;
    
    UPROPERTY(VisibleAnywhere)
    int32 Layer;
    
    UPROPERTY(VisibleAnywhere)
    FVector Location;
    
    UPROPERTY(VisibleAnywhere)
    FRotator Rotation;
    
    UPROPERTY(VisibleAnywhere)
    float Scale;
    
public:
    URandomSubRoomFeature();
};

