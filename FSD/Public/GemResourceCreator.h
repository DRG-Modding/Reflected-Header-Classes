#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "GemResourceCreator.generated.h"

class UGemResourceData;

UCLASS(EditInlineNew)
class UGemResourceCreator : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    UGemResourceData* ResourceData;
    
    UPROPERTY(EditAnywhere)
    bool CheckIfFreeSpaceAbove;
    
    UPROPERTY(EditAnywhere)
    int32 SearchSize;
    
public:
    UGemResourceCreator();
};

