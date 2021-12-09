#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "OcclusionPluginSourceSettingsBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class AUDIOEXTENSIONS_API UOcclusionPluginSourceSettingsBase : public UObject {
    GENERATED_BODY()
public:
    UOcclusionPluginSourceSettingsBase();
};

