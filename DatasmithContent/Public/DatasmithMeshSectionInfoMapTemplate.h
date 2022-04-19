#pragma once
#include "CoreMinimal.h"
#include "DatasmithMeshSectionInfoTemplate.h"
#include "DatasmithMeshSectionInfoMapTemplate.generated.h"

USTRUCT(BlueprintType)
struct DATASMITHCONTENT_API FDatasmithMeshSectionInfoMapTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<uint32, FDatasmithMeshSectionInfoTemplate> Map;
    
    FDatasmithMeshSectionInfoMapTemplate();
};

