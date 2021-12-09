#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "DeepCSGSection.generated.h"

class UDeepProceduralMeshComponent;

UCLASS()
class FSDENGINE_API ADeepCSGSection : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    UDeepProceduralMeshComponent* DeepMesh;
    
    ADeepCSGSection();
};

