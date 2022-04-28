#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "FlameWallSegment.generated.h"

class USphereComponent;

UCLASS(Abstract, Blueprintable)
class AFlameWallSegment : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* CollisionComponent;
    
public:
    AFlameWallSegment();
};

