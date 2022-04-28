#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "FindPointKeepingDistanceProbe.generated.h"

UCLASS(Blueprintable)
class AFindPointKeepingDistanceProbe : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MinDistance;
    
    UPROPERTY(EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(EditAnywhere)
    float IdealTargetDist;
    
    AFindPointKeepingDistanceProbe();
};

