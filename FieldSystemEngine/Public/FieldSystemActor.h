#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "FieldSystemActor.generated.h"

class UFieldSystemComponent;

UCLASS()
class FIELDSYSTEMENGINE_API AFieldSystemActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UFieldSystemComponent* FieldSystemComponent;
    
    AFieldSystemActor();
};

