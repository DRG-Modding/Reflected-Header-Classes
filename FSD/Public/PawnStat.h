#pragma once
#include "CoreMinimal.h"
#include "EPawnStatType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PawnStat.generated.h"

UCLASS(Blueprintable)
class UPawnStat : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float StartingValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPawnStatType PawnStatType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPawnStatType ValueModificationType;
    
public:
    UPawnStat();
};

