#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "ERoomMirroringSupport.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagContainer
#include "RoomGeneratorBase.generated.h"

UCLASS(Abstract, BlueprintType)
class URoomGeneratorBase : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Bounds;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool CanOnlyBeUsedOnce;
    
    UPROPERTY(VisibleAnywhere)
    ERoomMirroringSupport MirrorSupport;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer RoomTags;
    
    URoomGeneratorBase();
};

