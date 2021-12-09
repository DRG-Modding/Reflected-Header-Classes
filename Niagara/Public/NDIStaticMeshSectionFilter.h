#pragma once
#include "CoreMinimal.h"
#include "NDIStaticMeshSectionFilter.generated.h"

USTRUCT(BlueprintType)
struct FNDIStaticMeshSectionFilter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<int32> AllowedMaterialSlots;
    
    NIAGARA_API FNDIStaticMeshSectionFilter();
};

