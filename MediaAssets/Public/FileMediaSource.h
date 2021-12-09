#pragma once
#include "CoreMinimal.h"
#include "BaseMediaSource.h"
#include "FileMediaSource.generated.h"

UCLASS(EditInlineNew)
class MEDIAASSETS_API UFileMediaSource : public UBaseMediaSource {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    FString FilePath;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool PrecacheFile;
    
    UFUNCTION(BlueprintCallable)
    void SetFilePath(const FString& Path);
    
    UFileMediaSource();
};

