#pragma once
#include "CoreMinimal.h"
#include "ModioUserID.h"
//CROSS-MODULE INCLUDE: CoreUObject DateTime
#include "ModioUser.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioUser {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FModioUserID UserId;
    
    UPROPERTY(BlueprintReadOnly)
    FString Username;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime DateOnline;
    
    UPROPERTY(BlueprintReadOnly)
    FString ProfileUrl;
    
    FModioUser();
};

