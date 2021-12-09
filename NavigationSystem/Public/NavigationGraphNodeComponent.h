#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SceneComponent
#include "NavGraphNode.h"
#include "NavigationGraphNodeComponent.generated.h"

class UNavigationGraphNodeComponent;

UCLASS(MinimalAPI)
class UNavigationGraphNodeComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    FNavGraphNode Node;
    
    UPROPERTY(Export)
    UNavigationGraphNodeComponent* NextNodeComponent;
    
    UPROPERTY(Export)
    UNavigationGraphNodeComponent* PrevNodeComponent;
    
    UNavigationGraphNodeComponent();
};

