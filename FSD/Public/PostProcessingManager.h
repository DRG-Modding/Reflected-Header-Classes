#pragma once
#include "CoreMinimal.h"
#include "PostProcessingBlendable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PostProcessingManager.generated.h"

class AFSDPostProcessingActor;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class APostProcessingManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<AFSDPostProcessingActor>> RegisteredActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPostProcessingBlendable> CurrentBlendables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> Materials;
    
public:
    APostProcessingManager();
};

