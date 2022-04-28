#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RoomGeneratorItem.generated.h"

class URoomGeneratorBase;

USTRUCT(BlueprintType)
struct FRoomGeneratorItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URoomGeneratorBase* RoomGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    UPROPERTY(EditAnywhere, Transient)
    float Rotation;
    
    FSD_API FRoomGeneratorItem();
};

