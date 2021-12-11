#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EditableMeshFactory.generated.h"

class UEditableMesh;
class UPrimitiveComponent;

UCLASS(BlueprintType)
class EDITABLEMESH_API UEditableMeshFactory : public UObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static UEditableMesh* MakeEditableMesh(UPrimitiveComponent* PrimitiveComponent, const int32 LODIndex);
    
    UEditableMeshFactory();
};

