#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstanceProxy -FallbackName=AnimInstanceProxy
#include "TestAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FTestAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsAlive;
    
    UPROPERTY(EditAnywhere, Transient)
    float RandomStartPosition;
    
    UPROPERTY(EditAnywhere, Transient)
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsMoving;
    
    UPROPERTY(EditAnywhere, Transient)
    float WalkCyclePlayRate;
    
    FSD_API FTestAnimInstanceProxy();
};

