#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Commandlet -FallbackName=Commandlet
#include "OodleNetworkTrainerCommandlet.generated.h"

UCLASS(NonTransient, Config=Editor)
class UOodleNetworkTrainerCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    bool bCompressionTest;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    int32 HashTableSize;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    int32 DictionarySize;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    int32 DictionaryTrials;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    int32 TrialRandomness;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    int32 TrialGenerations;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    bool bNoTrials;
    
    UOodleNetworkTrainerCommandlet();
};

