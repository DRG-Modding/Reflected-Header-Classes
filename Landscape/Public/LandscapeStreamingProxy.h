#pragma once
#include "CoreMinimal.h"
#include "LandscapeProxy.h"
#include "LandscapeStreamingProxy.generated.h"

class ALandscape;

UCLASS(MinimalAPI)
class ALandscapeStreamingProxy : public ALandscapeProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TLazyObjectPtr<ALandscape> LandscapeActor;
    
    ALandscapeStreamingProxy();
};

