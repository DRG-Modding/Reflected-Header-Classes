#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "FlareMeta.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FFlareMeta {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY(EditAnywhere, Transient)
    float Inhibit;
    
    UPROPERTY(EditAnywhere, Transient)
    float Radius;
    
    UPROPERTY(EditAnywhere, Transient)
    float InvRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector Pos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool Moving;
    
    FSD_API FFlareMeta();
};

