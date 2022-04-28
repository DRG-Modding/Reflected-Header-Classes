#pragma once
#include "CoreMinimal.h"
#include "DatasmithMeshSectionInfoTemplate.generated.h"

USTRUCT(BlueprintType)
struct DATASMITHCONTENT_API FDatasmithMeshSectionInfoTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIndex;
    
    FDatasmithMeshSectionInfoTemplate();
};

