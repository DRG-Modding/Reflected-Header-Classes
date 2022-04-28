#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GeometryCacheActor.generated.h"

class UGeometryCacheComponent;

UCLASS(Blueprintable)
class GEOMETRYCACHE_API AGeometryCacheActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGeometryCacheComponent* GeometryCacheComponent;
    
public:
    AGeometryCacheActor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGeometryCacheComponent* GetGeometryCacheComponent() const;
    
};

