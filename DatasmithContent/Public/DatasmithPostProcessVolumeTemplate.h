#pragma once
#include "CoreMinimal.h"
#include "DatasmithObjectTemplate.h"
#include "DatasmithPostProcessSettingsTemplate.h"
#include "DatasmithPostProcessVolumeTemplate.generated.h"

UCLASS()
class DATASMITHCONTENT_API UDatasmithPostProcessVolumeTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    FDatasmithPostProcessSettingsTemplate Settings;
    
    UPROPERTY()
    uint8 bEnabled: 1;
    
    UPROPERTY()
    uint8 bUnbound: 1;
    
    UDatasmithPostProcessVolumeTemplate();
};

