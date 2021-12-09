#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "SkinList.generated.h"

USTRUCT(BlueprintType)
struct FSkinList {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSet<FGuid> Skins;
    
    FSD_API FSkinList();
};

