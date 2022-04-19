#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "GameDLCSave.generated.h"

USTRUCT(BlueprintType)
struct FGameDLCSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TSet<FGuid> AnnouncedIDs;
    
public:
    FSD_API FGameDLCSave();
};

