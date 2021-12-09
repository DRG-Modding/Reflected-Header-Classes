#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "SoundfieldEncodingSettingsBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class AUDIOEXTENSIONS_API USoundfieldEncodingSettingsBase : public UObject {
    GENERATED_BODY()
public:
    USoundfieldEncodingSettingsBase();
};

