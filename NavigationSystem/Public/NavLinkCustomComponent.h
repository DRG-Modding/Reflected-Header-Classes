#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "NavRelevantComponent.h"
#include "NavLinkCustomInterface.h"
//CROSS-MODULE INCLUDE: Engine ECollisionChannel
//CROSS-MODULE INCLUDE: Engine ENavLinkDirection
//CROSS-MODULE INCLUDE: Engine NavAgentSelector
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "NavLinkCustomComponent.generated.h"

class UNavArea;

UCLASS()
class NAVIGATIONSYSTEM_API UNavLinkCustomComponent : public UNavRelevantComponent, public INavLinkCustomInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    uint32 NavLinkUserId;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> EnabledAreaClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> DisabledAreaClass;
    
    UPROPERTY(EditAnywhere)
    FNavAgentSelector SupportedAgents;
    
    UPROPERTY(EditAnywhere)
    FVector LinkRelativeStart;
    
    UPROPERTY(EditAnywhere)
    FVector LinkRelativeEnd;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ENavLinkDirection::Type> LinkDirection;
    
    UPROPERTY(EditAnywhere)
    uint8 bLinkEnabled: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bNotifyWhenEnabled: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bNotifyWhenDisabled: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCreateBoxObstacle: 1;
    
    UPROPERTY(EditAnywhere)
    FVector ObstacleOffset;
    
    UPROPERTY(EditAnywhere)
    FVector ObstacleExtent;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> ObstacleAreaClass;
    
    UPROPERTY(EditAnywhere)
    float BroadcastRadius;
    
    UPROPERTY(EditAnywhere)
    float BroadcastInterval;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> BroadcastChannel;
    
public:
    UNavLinkCustomComponent();
};

