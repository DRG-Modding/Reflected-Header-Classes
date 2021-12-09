#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "ReverbPluginSourceSettingsBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class AUDIOEXTENSIONS_API UReverbPluginSourceSettingsBase : public UObject {
    GENERATED_BODY()
public:
    UReverbPluginSourceSettingsBase();
};

