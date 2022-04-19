#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "SkinList.generated.h"

USTRUCT(BlueprintType)
struct FSkinList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TSet<FGuid> Skins;
    
    FSD_API FSkinList();
};

