#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "SHAHashData.h"
#include "ChunkInfoData.generated.h"

USTRUCT(BlueprintType)
struct FChunkInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint64 Hash;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSHAHashData ShaHash;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int64 Filesize;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 GroupNumber;
    
    BUILDPATCHSERVICES_API FChunkInfoData();
};

