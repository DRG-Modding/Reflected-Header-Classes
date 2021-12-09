#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNotify
#include "AnimNotify_PlayMontageNotify.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ANIMGRAPHRUNTIME_API UAnimNotify_PlayMontageNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName NotifyName;
    
public:
    UAnimNotify_PlayMontageNotify();
};

