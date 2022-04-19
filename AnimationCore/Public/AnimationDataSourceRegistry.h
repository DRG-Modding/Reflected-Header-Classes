#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AnimationDataSourceRegistry.generated.h"

UCLASS()
class ANIMATIONCORE_API UAnimationDataSourceRegistry : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, TWeakObjectPtr<UObject>> DataSources;
    
public:
    UAnimationDataSourceRegistry();
};

