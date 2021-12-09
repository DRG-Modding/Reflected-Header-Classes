#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine NavAreaBase
//CROSS-MODULE INCLUDE: CoreUObject Color
//CROSS-MODULE INCLUDE: Engine NavAgentSelector
#include "NavArea.generated.h"

UCLASS(Abstract)
class NAVIGATIONSYSTEM_API UNavArea : public UNavAreaBase {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    float DefaultCost;
    
protected:
    UPROPERTY(Config, EditAnywhere)
    float FixedAreaEnteringCost;
    
public:
    UPROPERTY(Config, EditAnywhere)
    FColor DrawColor;
    
    UPROPERTY(Config, EditAnywhere)
    FNavAgentSelector SupportedAgents;
    
    UPROPERTY(Config)
    uint8 bSupportsAgent0: 1;
    
    UPROPERTY(Config)
    uint8 bSupportsAgent1: 1;
    
    UPROPERTY(Config)
    uint8 bSupportsAgent2: 1;
    
    UPROPERTY(Config)
    uint8 bSupportsAgent3: 1;
    
    UPROPERTY(Config)
    uint8 bSupportsAgent4: 1;
    
    UPROPERTY(Config)
    uint8 bSupportsAgent5: 1;
    
    UPROPERTY(Config)
    uint8 bSupportsAgent6: 1;
    
    UPROPERTY(Config)
    uint8 bSupportsAgent7: 1;
    
    UPROPERTY(Config)
    uint8 bSupportsAgent8: 1;
    
    UPROPERTY(Config)
    uint8 bSupportsAgent9: 1;
    
    UPROPERTY(Config)
    uint8 bSupportsAgent10: 1;
    
    UPROPERTY(Config)
    uint8 bSupportsAgent11: 1;
    
    UPROPERTY(Config)
    uint8 bSupportsAgent12: 1;
    
    UPROPERTY(Config)
    uint8 bSupportsAgent13: 1;
    
    UPROPERTY(Config)
    uint8 bSupportsAgent14: 1;
    
    UPROPERTY(Config)
    uint8 bSupportsAgent15: 1;
    
    UNavArea();
};

