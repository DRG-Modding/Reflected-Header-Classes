#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagQuery
#include "GenerationItem.h"
#include "RandomSubRoomItem.generated.h"

class URoomGeneratorGroup;

UCLASS()
class ARandomSubRoomItem : public AGenerationItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    URoomGeneratorGroup* RoomGroup;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery tagQuery;
    
    UPROPERTY(EditAnywhere)
    int32 Layer;
    
public:
    ARandomSubRoomItem();
};

