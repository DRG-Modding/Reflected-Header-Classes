#pragma once
#include "CoreMinimal.h"
#include "FieldNodeBase.h"
#include "FieldNodeFloat.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class FIELDSYSTEMENGINE_API UFieldNodeFloat : public UFieldNodeBase {
    GENERATED_BODY()
public:
    UFieldNodeFloat();
};

