#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FoliageTypeObject.generated.h"

class UObject;
class UFoliageType;
class UFoliageType_InstancedStaticMesh;

USTRUCT(BlueprintType)
struct FOLIAGE_API FFoliageTypeObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UObject* FoliageTypeObject;
    
    UPROPERTY(Transient)
    UFoliageType* TypeInstance;
    
    UPROPERTY()
    bool bIsAsset;
    
    UPROPERTY()
    TSubclassOf<UFoliageType_InstancedStaticMesh> Type;
    
public:
    FFoliageTypeObject();
};

