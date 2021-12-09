#pragma once
#include "CoreMinimal.h"
#include "MeshElementAttributeValue.h"
#include "MeshElementAttributeData.generated.h"

USTRUCT(BlueprintType)
struct FMeshElementAttributeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FName AttributeName;
    
    UPROPERTY(BlueprintReadWrite)
    int32 AttributeIndex;
    
    UPROPERTY(BlueprintReadWrite)
    FMeshElementAttributeValue AttributeValue;
    
    EDITABLEMESH_API FMeshElementAttributeData();
};

