#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "AnimNotify_MessageOwner.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UAnimNotify_MessageOwner : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Message;
    
    UAnimNotify_MessageOwner();
};

