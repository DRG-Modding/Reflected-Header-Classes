#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "AIStimulus.generated.h"

USTRUCT(BlueprintType)
struct AIMODULE_API FAIStimulus {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    float Age;
    
    UPROPERTY(BlueprintReadWrite)
    float ExpirationAge;
    
public:
    UPROPERTY(BlueprintReadWrite)
    float Strength;
    
    UPROPERTY(BlueprintReadWrite)
    FVector StimulusLocation;
    
    UPROPERTY(BlueprintReadWrite)
    FVector ReceiverLocation;
    
    UPROPERTY(BlueprintReadWrite)
    FName Tag;
    
protected:
    UPROPERTY(BlueprintReadWrite)
    uint8 bSuccessfullySensed: 1;
    
public:
    FAIStimulus();
};

