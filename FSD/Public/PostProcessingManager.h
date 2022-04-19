#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PostProcessingBlendable.h"
#include "PostProcessingManager.generated.h"

class AFSDPostProcessingActor;
class UMaterialInstanceDynamic;

UCLASS()
class APostProcessingManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AFSDPostProcessingActor>> RegisteredActors;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPostProcessingBlendable> CurrentBlendables;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> Materials;
    
public:
    APostProcessingManager();
};

