#pragma once
#include "CoreMinimal.h"
#include "EDatasmithCADStitchingTechnique.h"
#include "DatasmithTessellationOptions.generated.h"

USTRUCT(BlueprintType)
struct DATASMITHCONTENT_API FDatasmithTessellationOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float ChordTolerance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere)
    float MaxEdgeLength;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere)
    float NormalTolerance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere)
    EDatasmithCADStitchingTechnique StitchingTechnique;
    
    FDatasmithTessellationOptions();
};

