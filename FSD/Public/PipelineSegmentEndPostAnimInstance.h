#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "PipelineSegmentEndPostAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UPipelineSegmentEndPostAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float AssemblyAnimLength;
    
    UPROPERTY(EditAnywhere)
    float AssemblyTimeTarget;
    
    UPROPERTY(EditAnywhere)
    float AssemblyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAssembling;
    
public:
    UPipelineSegmentEndPostAnimInstance();
};

