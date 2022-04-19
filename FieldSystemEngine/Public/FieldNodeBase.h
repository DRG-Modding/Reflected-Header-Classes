#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "FieldNodeBase.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UFieldNodeBase : public UActorComponent {
    GENERATED_BODY()
public:
    UFieldNodeBase();
};

