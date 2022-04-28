#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "GameActivitySettings.generated.h"

class UGameActivityType;

UCLASS(Blueprintable)
class UGameActivitySettings : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UGameActivityType>> GameActivites;
    
public:
    UGameActivitySettings();
};

