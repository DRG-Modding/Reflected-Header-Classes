#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "GeometryCacheActor.generated.h"

class UGeometryCacheComponent;

UCLASS()
class GEOMETRYCACHE_API AGeometryCacheActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UGeometryCacheComponent* GeometryCacheComponent;
    
public:
    UFUNCTION(BlueprintPure)
    UGeometryCacheComponent* GetGeometryCacheComponent() const;
    
    AGeometryCacheActor();
};

