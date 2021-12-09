#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "AnimationDataSourceRegistry.generated.h"

UCLASS()
class ANIMATIONCORE_API UAnimationDataSourceRegistry : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<FName, TWeakObjectPtr<UObject>> DataSources;
    
public:
    UAnimationDataSourceRegistry();
};

