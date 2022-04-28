#pragma once
#include "CoreMinimal.h"
#include "EDatasmithCADStitchingTechnique.h"
#include "DatasmithTessellationOptions.generated.h"

USTRUCT(BlueprintType)
struct DATASMITHCONTENT_API FDatasmithTessellationOptions {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    float ChordTolerance;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    float MaxEdgeLength;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    float NormalTolerance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDatasmithCADStitchingTechnique StitchingTechnique;
    
    FDatasmithTessellationOptions();
};

