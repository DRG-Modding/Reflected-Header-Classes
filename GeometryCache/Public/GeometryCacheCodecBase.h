#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GeometryCacheCodecBase.generated.h"

UCLASS()
class GEOMETRYCACHE_API UGeometryCacheCodecBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TopologyRanges;
    
public:
    UGeometryCacheCodecBase();
};

