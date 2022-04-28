#pragma once
#include "CoreMinimal.h"
#include "ProcMeshVertex.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "ProcMeshSection.generated.h"

USTRUCT(BlueprintType)
struct FProcMeshSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProcMeshVertex> ProcVertexBuffer;
    
    UPROPERTY(EditAnywhere)
    TArray<uint32> ProcIndexBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox SectionLocalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSectionVisible;
    
    PROCEDURALMESHCOMPONENT_API FProcMeshSection();
};

