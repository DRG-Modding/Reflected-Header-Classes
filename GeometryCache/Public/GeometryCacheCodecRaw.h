#pragma once
#include "CoreMinimal.h"
#include "GeometryCacheCodecBase.h"
#include "GeometryCacheCodecRaw.generated.h"

UCLASS()
class GEOMETRYCACHE_API UGeometryCacheCodecRaw : public UGeometryCacheCodecBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 DummyProperty;
    
public:
    UGeometryCacheCodecRaw();
};

