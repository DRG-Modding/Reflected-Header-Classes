#pragma once
#include "CoreMinimal.h"
#include "LandscapeProxy.h"
#include "LandscapeStreamingProxy.generated.h"

class ALandscape;

UCLASS(MinimalAPI, NotPlaceable)
class ALandscapeStreamingProxy : public ALandscapeProxy {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TLazyObjectPtr<ALandscape> LandscapeActor;
    
    ALandscapeStreamingProxy();
};

