#pragma once
#include "CoreMinimal.h"
#include "FilterOptionPerAxis.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONCORE_API FFilterOptionPerAxis {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bZ;
    
    FFilterOptionPerAxis();
};

