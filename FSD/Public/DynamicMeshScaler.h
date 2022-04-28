#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DynamicMeshScaler.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDynamicMeshScaler : public UActorComponent {
    GENERATED_BODY()
public:
    UDynamicMeshScaler();
};

