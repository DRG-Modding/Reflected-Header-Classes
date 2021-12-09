#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject SoftClassPath
#include "SignificanceManager.generated.h"

UCLASS(DefaultConfig)
class SIGNIFICANCEMANAGER_API USignificanceManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, GlobalConfig, NoClear)
    FSoftClassPath SignificanceManagerClassName;
    
public:
    USignificanceManager();
};

