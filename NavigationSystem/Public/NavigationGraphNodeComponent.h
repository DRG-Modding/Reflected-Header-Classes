#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "NavGraphNode.h"
#include "NavigationGraphNodeComponent.generated.h"

class UNavigationGraphNodeComponent;

UCLASS(MinimalAPI, meta=(BlueprintSpawnableComponent))
class UNavigationGraphNodeComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNavGraphNode Node;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UNavigationGraphNodeComponent* NextNodeComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UNavigationGraphNodeComponent* PrevNodeComponent;
    
    UNavigationGraphNodeComponent();
};

