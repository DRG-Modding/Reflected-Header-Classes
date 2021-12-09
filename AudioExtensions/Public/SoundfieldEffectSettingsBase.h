#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "SoundfieldEffectSettingsBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class AUDIOEXTENSIONS_API USoundfieldEffectSettingsBase : public UObject {
    GENERATED_BODY()
public:
    USoundfieldEffectSettingsBase();
};

