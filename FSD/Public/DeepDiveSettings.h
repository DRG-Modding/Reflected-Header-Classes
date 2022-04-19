#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DeepDiveLoaderSequence.h"
#include "DeepDiveSettings.generated.h"

class UMissionWarning;
class UMutator;
class UDeepDiveTemplate;
class UDialogDataAsset;
class UMissionMutator;
class UMissionNameBank;

UCLASS()
class UDeepDiveSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDeepDiveTemplate* NormalTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDeepDiveTemplate* HardTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMutator*> BaseMutators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMissionMutator*> Mutators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMissionWarning*> Warnings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDialogDataAsset*> DeepDiveMissionCompleteShouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeepDiveLoaderSequence> LoaderSequnces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionNameBank* DeepDiveNameBank;
    
    UDeepDiveSettings();
};

