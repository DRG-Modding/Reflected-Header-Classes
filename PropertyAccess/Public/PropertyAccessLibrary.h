#pragma once
#include "CoreMinimal.h"
#include "PropertyAccessSegment.h"
#include "PropertyAccessPath.h"
#include "PropertyAccessCopyBatch.h"
#include "PropertyAccessIndirectionChain.h"
#include "PropertyAccessIndirection.h"
#include "PropertyAccessLibrary.generated.h"

USTRUCT(BlueprintType)
struct FPropertyAccessLibrary {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPropertyAccessSegment> PathSegments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPropertyAccessPath> SrcPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPropertyAccessPath> DestPaths;
    
    UPROPERTY(EditAnywhere)
    FPropertyAccessCopyBatch CopyBatches[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPropertyAccessIndirectionChain> SrcAccesses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPropertyAccessIndirectionChain> DestAccesses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPropertyAccessIndirection> Indirections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> EventAccessIndices;
    
public:
    PROPERTYACCESS_API FPropertyAccessLibrary();
};

