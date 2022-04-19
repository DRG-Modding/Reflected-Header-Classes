#pragma once
#include "CoreMinimal.h"
#include "MeshElementAttributeValue.h"
#include "MeshElementAttributeData.generated.h"

USTRUCT(BlueprintType)
struct FMeshElementAttributeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName AttributeName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 AttributeIndex;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMeshElementAttributeValue AttributeValue;
    
    EDITABLEMESH_API FMeshElementAttributeData();
};

