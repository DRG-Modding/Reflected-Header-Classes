#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "AsyncLevelPersistanceActor.generated.h"

class UObject;

UCLASS(Blueprintable)
class AAsyncLevelPersistanceActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> References;
    
    AAsyncLevelPersistanceActor();
};

