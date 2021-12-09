#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "SpatializationPluginSourceSettingsBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class AUDIOEXTENSIONS_API USpatializationPluginSourceSettingsBase : public UObject {
    GENERATED_BODY()
public:
    USpatializationPluginSourceSettingsBase();
};

