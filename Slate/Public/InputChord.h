#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: InputCore Key
#include "InputChord.generated.h"

USTRUCT(BlueprintType)
struct SLATE_API FInputChord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bShift: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bCtrl: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAlt: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bCmd: 1;
    
    FInputChord();
};

