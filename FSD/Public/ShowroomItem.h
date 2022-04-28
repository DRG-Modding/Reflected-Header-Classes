#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ShowroomItem.generated.h"

class AShowroomStage;

UCLASS(Abstract, Blueprintable)
class AShowroomItem : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AShowroomStage> ShowroomStage;
    
    AShowroomItem();
};

