#pragma once
#include "CoreMinimal.h"
#include "DatasmithPostProcessSettingsTemplate.h"
#include "DatasmithObjectTemplate.h"
#include "DatasmithPostProcessVolumeTemplate.generated.h"

UCLASS(Blueprintable)
class DATASMITHCONTENT_API UDatasmithPostProcessVolumeTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatasmithPostProcessSettingsTemplate Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUnbound: 1;
    
    UDatasmithPostProcessVolumeTemplate();
};

