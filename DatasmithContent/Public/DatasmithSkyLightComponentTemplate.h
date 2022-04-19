#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESkyLightSourceType -FallbackName=ESkyLightSourceType
#include "DatasmithObjectTemplate.h"
#include "DatasmithSkyLightComponentTemplate.generated.h"

class UTextureCube;

UCLASS()
class DATASMITHCONTENT_API UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESkyLightSourceType> SourceType;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 CubemapResolution;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTextureCube* Cubemap;
    
    UDatasmithSkyLightComponentTemplate();
};

