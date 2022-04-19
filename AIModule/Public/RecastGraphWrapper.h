#pragma once
#include "CoreMinimal.h"
#include "RecastGraphWrapper.generated.h"

class ARecastNavMesh;

USTRUCT()
struct AIMODULE_API FRecastGraphWrapper {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    ARecastNavMesh* RecastNavMeshActor;
    
public:
    FRecastGraphWrapper();
};

