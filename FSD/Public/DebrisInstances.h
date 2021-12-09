#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine HierarchicalInstancedStaticMeshComponent
#include "DebrisInstances.generated.h"

class UDebrisBase;

UCLASS(EditInlineNew)
class UDebrisInstances : public UHierarchicalInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    UDebrisBase* DebrisBase;
    
private:
    UPROPERTY(Transient)
    int32 DebrisIndex;
    
public:
    UDebrisInstances();
};

