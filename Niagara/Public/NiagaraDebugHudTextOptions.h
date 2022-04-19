#pragma once
#include "CoreMinimal.h"
#include "ENiagaraDebugHudVAlign.h"
#include "ENiagaraDebugHudHAlign.h"
#include "ENiagaraDebugHudFont.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "NiagaraDebugHudTextOptions.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraDebugHudTextOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraDebugHudFont Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraDebugHudHAlign HorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraDebugHudVAlign VerticalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ScreenOffset;
    
    NIAGARA_API FNiagaraDebugHudTextOptions();
};

