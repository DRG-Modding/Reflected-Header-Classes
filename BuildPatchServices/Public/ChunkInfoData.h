#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "SHAHashData.h"
#include "ChunkInfoData.generated.h"

USTRUCT(BlueprintType)
struct FChunkInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    UPROPERTY(EditAnywhere)
    uint64 Hash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSHAHashData ShaHash;
    
    UPROPERTY(EditAnywhere)
    int64 Filesize;
    
    UPROPERTY(EditAnywhere)
    uint8 GroupNumber;
    
    BUILDPATCHSERVICES_API FChunkInfoData();
};

