#pragma once
#include "CoreMinimal.h"
#include "PropertyAccessSegment.h"
#include "PropertyAccessPath.h"
#include "PropertyAccessIndirectionChain.h"
#include "PropertyAccessCopyBatch.h"
#include "PropertyAccessIndirection.h"
#include "PropertyAccessLibrary.generated.h"

USTRUCT()
struct FPropertyAccessLibrary {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FPropertyAccessSegment> PathSegments;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FPropertyAccessPath> SrcPaths;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FPropertyAccessPath> DestPaths;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FPropertyAccessCopyBatch CopyBatches[4];
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPropertyAccessIndirectionChain> SrcAccesses;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPropertyAccessIndirectionChain> DestAccesses;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPropertyAccessIndirection> Indirections;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<int32> EventAccessIndices;
    
public:
    PROPERTYACCESS_API FPropertyAccessLibrary();
};

