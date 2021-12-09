#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "SlateSettings.generated.h"

UCLASS(DefaultConfig)
class SLATE_API USlateSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bExplicitCanvasChildZOrder;
    
    USlateSettings();
};

