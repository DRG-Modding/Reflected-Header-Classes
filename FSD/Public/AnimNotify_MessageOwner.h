#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimNotify
#include "AnimNotify_MessageOwner.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UAnimNotify_MessageOwner : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Message;
    
    UAnimNotify_MessageOwner();
};

