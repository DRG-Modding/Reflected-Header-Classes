#pragma once
#include "CoreMinimal.h"
#include "SHAHashData.h"
#include "ChunkPartData.h"
#include "FileManifestData.generated.h"

USTRUCT(BlueprintType)
struct FFileManifestData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Filename;
    
    UPROPERTY()
    FSHAHashData FileHash;
    
    UPROPERTY()
    TArray<FChunkPartData> FileChunkParts;
    
    UPROPERTY()
    TArray<FString> InstallTags;
    
    UPROPERTY()
    bool bIsUnixExecutable;
    
    UPROPERTY()
    FString SymlinkTarget;
    
    UPROPERTY()
    bool bIsReadOnly;
    
    UPROPERTY()
    bool bIsCompressed;
    
    BUILDPATCHSERVICES_API FFileManifestData();
};

