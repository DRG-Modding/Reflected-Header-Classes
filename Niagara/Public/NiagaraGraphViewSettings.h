#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "NiagaraGraphViewSettings.generated.h"

USTRUCT()
struct FNiagaraGraphViewSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FVector2D Location;
    
    UPROPERTY()
    float Zoom;
    
    UPROPERTY()
    bool bIsValid;
    
public:
    NIAGARA_API FNiagaraGraphViewSettings();
};

